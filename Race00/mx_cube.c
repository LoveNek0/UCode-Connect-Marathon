void mx_printchar(char c);

void mx_cube(int n);
void mx_cube(int n){
    if(n==0 && n<=1){
        mx_printchar('\n');
		return;
    }
	 if(n<0){
		return;
    }
    int t1=(n+(n/2)+3);
	for(int i =0; i<t1+2; i++){
	    if(i==0){
    	    for(int j =0; j<(n/2)+1;j++){
    	        mx_printchar(' ');
    	    }
    	    mx_printchar('+');
    	    for(int j=0;j<(n*2);j++){
    	        mx_printchar('-');
    	    }
    	    mx_printchar('+');
    	    mx_printchar('\n');
	    }
	    if(i>0 && i<(n/2)+1){
	        for(int j=0; j<(n/2)-(i-1);j++){
	         mx_printchar(' ');
	        }
	        mx_printchar('/'); 
	        for(int j=0; j<n*2;j++){
	            mx_printchar(' ');
	        }
	        mx_printchar('/');
	        for(int j=0; j<(i-1);j++){
	            mx_printchar(' ');
	        }
	        mx_printchar('|');
	        mx_printchar('\n');
	    }
	    if(i==(n/2)+1){
	        mx_printchar('+');
    	    for(int j=0;j<(n*2);j++){
    	        mx_printchar('-');
    	    }
    	    mx_printchar('+');
    	    for(int j=0; j<(i-1);j++){
	            mx_printchar(' ');
	        }
	        mx_printchar('|');
    	    mx_printchar('\n');
	    }
	    if(i>(n/2)+2 && i<n+2){
	        mx_printchar('|');
	        for(int j=0; j<n*2;j++){
	             mx_printchar(' ');
	        }
	        mx_printchar('|');
	       for(int j=0; j<n/2;j++){
	           mx_printchar(' ');
	       }
	       mx_printchar('|');
	        mx_printchar('\n');
	    }
	    
	    if(i>n+1 && i<t1){
	        mx_printchar('|');
	        for(int j=0; j<n*2;j++){
	             mx_printchar(' ');
	        }
	        mx_printchar('|');
	        for(int j=0; j<(t1-2)-(i-1);j++){
	         mx_printchar(' ');
	        }
	        if(i==n+2){
	            mx_printchar('+');
	        }else
	            mx_printchar('/');
	        mx_printchar('\n');
	    }
	    if(i==t1+1){
	         mx_printchar('+');
    	    for(int j=0;j<(n*2);j++){
    	        mx_printchar('-');
    	    }
    	    mx_printchar('+');
    	    mx_printchar('\n');
	    }
	}
}
