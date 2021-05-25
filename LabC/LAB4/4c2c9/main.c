#define _CRT_SECURE_NO_WARNINGS
#define SIZE 10
#include <stdio.h>

int main()
{
    FILE *firstP, *fp = fopen("F:\\xyunR\\4c2c9\\my.txt", "r");
    if (fp  == NULL)
        perror("пиздец))))");
    const int charSize = 10;
    char fgetc[SIZE];
    //for (int j = 0; j < 255; j++)
      //  fgetc[j]=0;
    int i = 0;

//    while ((fgetc[i]=gets(fp)) != EOF)
//    {
//       printf("DA");
//       fputc(fgetc[i++],stdout);
//    }
    //printf("net");

//    scanf("%s", &fgetc);
//    printf("\n");
//    printf("%s", fgetc);
//    //fscanf(fp,"%c", fgetc);
//    fprintf(fp,"%s", fgetc);
//    //perror(")))");//
    firstP= fopen("F:\\xyunR\\4c2c9\\my.txt", "r");
    while (1)
    {
            fgets(fgetc, charSize, firstP);
            int sizeOfCheckWord = 0;
            while (fgetc[sizeOfCheckWord++] != '\0'){}

            fclose(fp);
            fp = fopen("F:\\xyunR\\4c2c9\\my.txt", "r");
            int sizeOf = 0;
            char nextWord [SIZE];
            do
            {
                fgets(nextWord, SIZE,fp);
                sizeOf = 0;
                while(nextWord[sizeOf++] != '\0'){}
                if (sizeOfCheckWord != sizeOf)
                    continue;
                else printf("yes\n");

            }
            while (nextWord[sizeOf-1] != '\0' || nextWord[0] != EOF);
            break;
    }

    while (fgetc[i] != '\0')
    {
        printf("%c i = %d \n", fgetc[i],i);
        i++;
    }
    fclose(firstP);
    fclose(fp);
    return 0;
}
