char *readFile(char *fileName)
{
    FILE *file;
    char *code = malloc(1000 * sizeof(char));
    file = fopen(fileName, "r");
    do 
    {
      *code++ = (char)fgetc(file);

    } while(*code != EOF);
    return code;
}


char *readFile(char *fileName)
{
    FILE *file = fopen(fileName, "r");
    char *code;
    size_t n = 0;
    int c;

    if (file == NULL)
        return NULL; //could not open file

    code = malloc(1000);

    while ((c = fgetc(file)) != EOF)
    {
        code[n++] = (char) c;
    }

    // don't forget to terminate with the null character
    code[n] = '\0';        

    return code;
}
