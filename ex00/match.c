int     match(char *s1, char *s2)
{
    int     pos1;
    int     pos2;

    pos1 = 0;
    pos2 = 0;
    while (s1[pos1] || s2[pos2])
    {
        while (s2[pos2] == '*')
        {
            while(s2[pos2 + 1] == '*')
                pos2++;
            if(s1[pos1] == s2[pos2 + 1])
                pos2++;
            else
                pos1++;
        }
        if (s1[pos1] != s2[pos2] || !s1[pos1] || !s2[pos2])
            return(0);
        pos1++;
        pos2++;
    }
    return (1);
}