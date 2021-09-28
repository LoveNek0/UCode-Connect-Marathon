void mx_printchar(char c);
void mx_pyramid(int n);

void mx_pyramid(int n){ 
	 if(n<2){
		return;
    }
    if(n%2!=0){
        mx_printchar('\n');
		return;
    }
    for(int i=0; i<n+1; i++){
       if(i==0){
           for(int j=0; j<n-(i+1);j++){
               mx_printchar(' ');
           }
           mx_printchar('/');
           for(int j=0; j<i;j++){
               mx_printchar(' ');
           }
           mx_printchar('\\');
           mx_printchar('\n');
       } 
       if(i>0 && i<n/2){
           for(int j=0; j<n-(i+1);j++){
               mx_printchar(' ');
           }
           mx_printchar('/');
           for(int j=0; j<((i-1)*2)+1;j++){
               mx_printchar(' ');
           }
           mx_printchar('\\');
           for(int j=0;j<i;j++){
                mx_printchar(' ');
            }
            mx_printchar('\\');
           mx_printchar('\n');
       }
       if(i>(n/2)-1 && i<n-1){
             for(int j=0; j<n-(i+1);j++){
               mx_printchar(' ');
           }
           mx_printchar('/');
           for(int j=0; j<((i-1)*2)+1;j++){
               mx_printchar(' ');
           }
           mx_printchar('\\');
           for(int j=0;j<(n/2-(i-(n/2)))-1;j++){
                mx_printchar(' ');
            }
            mx_printchar('|');
           mx_printchar('\n');
       }
       if(i==n-1){
            mx_printchar('/');
            for(int j =0; j<(n*2-3);j++){
                 mx_printchar('_');
            }
            mx_printchar('\\');
            mx_printchar('|');
            mx_printchar('\n');
       }
    }
}
