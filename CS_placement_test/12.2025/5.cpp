int match(char *s1,char *s2)
{
    int i;
    int len1=strlen(s1);
    int len2=strlen(s2);
    if(len1>len2) return 0;   // 你原代码漏掉的边界
    char s3[len1+1];
    for(i=0;i<len1;i++)
    {
        if(s1[i]=='A') s3[i]='T';
        else if(s1[i]=='T') s3[i]='A';
        else if(s1[i]=='C') s3[i]='G';
        else if(s1[i]=='G') s3[i]='C';
    }
    s3[len1]='\0';
    for(i=0;i<=len2-len1;i++)
    {
        if(strncmp(s3,s2+i,len1)==0)
            return 1;
    }
    return 0;
}