int firstUniqChar(char* s) {
    int freq[26]={0};
    for(int i=0;s[i]!='\0';i++){
        freq[s[i]-97]++;
    }
   
    for(int i=0;s[i]!='\0';i++){
        if(freq[s[i]-97]==1){
            printf("%d",i);
            return i;
            
        }
    }
    return -1;
}
