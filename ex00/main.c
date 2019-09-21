int     match(char *s1, char *s2);

int     main(int argc, char **argv)
{
    if (argc == 3)
        return(match(argv[1], argv[2]));
    else
        return (-1);    
}