
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*The function takes an array of heights, width and 
length as its 3 arguments where each index i value 
determines the height, width, length of the ith box. 
Here n is the total no of boxes.*/
struct box
{
    int height,width,length;
};

int compare(const void *a,const void *b)
{
    struct box *b1=(struct box *)a;
    struct box *b2=(struct box *)b;
    if(b1->width>b2->width)
        return 1;
    else if(b1->width<b2->width)
        return -1;
    else
    {
        return b1->length-b2->length;
    }
}
int maxHeight(int height[],int width[],int length[],int n)
{
    //Your code here
    int index=-1,i=0;
    struct box myarr[3*n];
    while(i<n)
    {
        index++;
        myarr[index].height=height[i];
        myarr[index].width=max(width[i],length[i]);
        myarr[index].length=min(width[i],length[i]);
        
        index++;
        myarr[index].height=width[i];
        myarr[index].width=max(height[i],length[i]);
        myarr[index].length=min(height[i],length[i]);
        
        index++;
        myarr[index].height=length[i];
        myarr[index].width=max(height[i],width[i]);
        myarr[index].length=min(height[i],width[i]);
        
        i++;
    }
    qsort(myarr,3*n,sizeof(myarr[0]),compare);
    
    int ret_max=0;
    int N=n;
    int maxh[3*N];
    for(int k=0;k<3*N;k++)
        maxh[k]=myarr[k].height;
    for(int k=1;k<3*N;k++)
    {
        for(int f=0;f<k;f++)
        {
            if( (myarr[f].width<myarr[k].width)&&
                 (myarr[f].length<myarr[k].length) )
            {
                if(maxh[k]<maxh[f]+myarr[k].height)
                    maxh[k]=maxh[f]+myarr[k].height;
                
            }
        }
        if(ret_max<maxh[k])
            ret_max=maxh[k];
    }
        
    
    return ret_max;
    
    
    
}
