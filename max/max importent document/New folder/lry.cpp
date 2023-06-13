#include<stdio.h>
int lh(int time[], int n){     // find pos in case whether new page is not found in string and all frames are filled
	int i, minimum = time[0], pos = 0;
 
	for(i = 1; i < n; ++i){
		if(time[i] < minimum){
			minimum = time[i];
			pos = i;
		}
	}
	
	return pos;
}
 
int main()
{
    int nf, np,counter = 0, tmp1, tmp2,pos,pgr = 0;
	printf("Enter number of frames: ");
	scanf("%d", &nf);
	
	printf("Enter number of pages: ");
	scanf("%d", &np);
	int frames[nf], pages[np], time[nf];
	printf("Enter reference string: ");
	
    for(int i = 0; i < np; ++i){
    	scanf("%d", &pages[i]);
    }
    
	for(int i = 0; i < nf; ++i){
    	frames[i] = -1;
    }
    
    for(int i = 0; i < np; ++i){
    	tmp1 = tmp2 = 0;
    	
    	for(int j = 0; j < nf; ++j){
    		if(frames[j] == pages[i]){
	    		counter++;
	    		time[j] = counter;
	   			tmp1 = tmp2 = 1;
	   			break;
   			}
    	}
    	
    	if(tmp1 == 0){
			for(int j = 0; j < nf; ++j){
	    		if(frames[j] == -1){
	    			counter++;
	    			pgr++;
	    			frames[j] = pages[i];
	    			time[j] = counter;
	    			tmp2 = 1;
	    			break;
	    		}
    		}	
    	}
    	
    	if(tmp2 == 0){
    		pos = lh(time, nf);
    		counter++;
    		pgr++;
    		frames[pos] = pages[i];
    		time[pos] = counter;
    	}
}
	printf("\nLast String:");
    	
    	for(int j = 0; j < nf; ++j){
    		printf("%d\t", frames[j]);
    	}
	
	printf("\n\nTotal Number of Page Faults = %d", pgr);
    
    return 0;
}

