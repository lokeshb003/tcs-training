char str[1] = 'welcome';
char key[] = 'lcomew';
for(i=0;i<strlen(key)l;i++) {
    for(j=0;j<strlen(str);j++) {
        if(key[i]==str[j]) {
            printf("%c",str[j]);
        }
    }
}