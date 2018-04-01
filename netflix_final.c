#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char queue[100],stack[100],origin_stack[100],parent_track='0';
int n,i,j,flag[100],count=0,price=0,start_pos,end_pos,num_flag[100];
char *bucket,ch='A',delim='1',*ptr,dest_char,start_char='a';
int front=-1,rear=-1,stack_top=-1,origin_stack_top=-1;
void push(char item,char* stack,int *top)
{
	stack[++(*top)]=item;
}
void insert(char item)
{
	if(front==-1)
	front=0;
	queue[++rear]=item;
}
int calc_space_cost(char item)
{
	item=tolower(item);
	switch(item)
	{
		case 'a':
		case 'b':
		case 'c':
		case 'd':
		case 'e':
		case 'f':return 1;
		case 'g':
		case 'h':
		case 'i':
		case 'j':
		case 'k':
		case 'l':return 2;
		case 'm':
		case 'n':
		case 'o':
		case 'p':
		case 'q':
		case 'r':return 3;
		case 's':
		case 't':
		case 'u':
		case 'v':
		case 'w':
		case 'x':return 4;
		case 'y':
		case 'z':
		case '0':
		case '1':
		case '2':
		case '3':return 5;
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':return 6;
		
		
	}
}
char delete()
{
	char return_val=queue[front++];
		
	
		push(return_val,&stack,&stack_top);
		parent_track=return_val;

	return return_val;
}
void update_start_ptr(char item)
{
	switch(item)
		{
			case 'a':
			case 'A':	ptr=bucket;
						break;
			case 'b':
			case 'B':	ptr=bucket+n;
						break;
			case 'c':
			case 'C':	ptr=bucket+2*n;
						break;
			case 'd':
			case 'D':ptr=bucket+3*n;
						break;
			case 'e':
			case 'E':ptr=bucket+4*n;
						break;
			case 'f':
			case 'F':ptr=bucket+5*n;
						break;
			case 'g':
			case 'G':ptr=bucket+6*n;
						break;
				case 'h':
			case 'H': ptr=bucket+7*n;
						break;
			case 'i':
			case 'I': ptr=bucket+8*n;
						break;
			case 'j':
			case 'J': ptr=bucket+9*n;
					
						break;
						
			case 'k':
			case 'K': ptr=bucket+10*n;
						break;
			case 'l':
			case 'L': ptr=bucket+11*n;
						break;
			case 'm':
			case 'M':	ptr=bucket+12*n;
						break;
			case 'n':
			case 'N':	ptr=bucket+13*n;
						break;
			case 'o':
			case 'O':	ptr=bucket+14*n;
						break;
			case 'p':
			case 'P':ptr=bucket+15*n;
						break;
			case 'q':
			case 'Q':ptr=bucket+16*n;
						break;
			case 'r':
			case 'R':ptr=bucket+17*n;
						break;
			case 's':
			case 'S':ptr=bucket+18*n;
						break;
			case 't':
			case 'T': ptr=bucket+19*n;
						break;
			case 'u':
			case 'U': ptr=bucket+20*n;
						break;
			case 'v':
			case 'V': ptr=bucket+21*n;
					
						break;
						
			case 'w':
			case 'W': ptr=bucket+22*n;
						break;
			case 'x':
			case 'X': ptr=bucket+23*n;
						break;
			case 'y':
			case 'Y': ptr=bucket+24*n;
						break;
			case 'z':
			case 'Z': ptr=bucket+25*n;
						break;
			case '0':ptr=bucket+26*n;
						break;
			case '1':ptr=bucket+27*n;
					 break;	
			case '2':ptr=bucket+28*n;
						break;
			case '3':ptr=bucket+29*n;
					 break;	
			case '4':ptr=bucket+30*n;
						break;
			case '5':ptr=bucket+31*n;
					 break;	
			case '6':ptr=bucket+32*n;
						break;
			case '7':ptr=bucket+33*n;
					 break;	
			case '8':ptr=bucket+34*n;
					 break;	
			case '9':ptr=bucket+35*n;
						break;
					
			
						
						
		}
	
}


int main()
{

	int k;
	char str[]="rocky balboa",delete_char;
	printf("Enter the number of letters: ");
	scanf("%d",&n);
	bucket=(char*)calloc(sizeof(char),n*n);
	getchar();
	
	// This for loop is used to take characters as input to the adjacency list
	for(i=0;i<n;i++)  
	{
		
	
		//	printf("i=%d j=%d\n",i,j);
			scanf("%c",&bucket[i*n]);
			getchar();
		
	}
	// This for loop is used to display the adjacency list
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%c ",bucket[i*n+j]);
		printf("\n");
	}
	printf("Enter the adjacency list\n");
	for(i=0;i<n;i++)
	{
		printf("Enter children of %c: ",ch++);
		for(j=1;delim!='\n';j++)
		{
			scanf("%c[^\n]",&bucket[i*n+j]);
			scanf("%c",&delim);

		}
		delim='1';
	}
//	printf("Bucket array\n");
//	for(i=0;i<n;i++)
//	{
//		for(j=0;j<n;j++)
//			printf("%c ",bucket[i*n+j]);
//		printf("\n");
//	}
//	ptr=bucket+10*n; for k as start
	for(k=0;k<strlen(str)-1;k++)
	{
		start_char=str[k];
		
	dest_char=str[k+1];
	if(dest_char==' '||start_char==' ')
		{
			if(start_char==' '&&dest_char==' ')
			{
				price=0;
			}
			else if(dest_char==' ')
			price=calc_space_cost(start_char);
			else
			price=calc_space_cost(dest_char);
			printf("cost from %c -> %c: %d\n",str[k],str[k+1],price);
			price=0;
			continue;
		}
	
	update_start_ptr(start_char);
	push(*ptr,&stack,&stack_top);
	push(parent_track,&origin_stack,&origin_stack_top);
	parent_track=*ptr;
	
	
	//count++;
	for(i=0;i<n;i++)
		flag[i]=0;
	for(i=0;i<10;i++)
		num_flag[i]=0;
	flag[start_char-97]=1;
	while(count<n)	
	{
	
	for(i=1;i<n;i++)
	{
		if(*(ptr+i)>=97)
		{
		
		if(flag[*(ptr+i)-97]!=1&&*(ptr+i)!=0)
		{
		
		insert(*(ptr+i));
	//	printf("IN QUEUE %C\n",*(ptr+i));
		push(parent_track,&origin_stack,&origin_stack_top);
		switch(*(ptr+i))
		{
			case 'a':
			case 'A':flag[0]=1;
				//	count++;
						break;
			case 'b':
			case 'B':flag[1]=1;
				//	count++;
						break;
			case 'c':
			case 'C':flag[2]=1;
				//	count++;
						break;
			case 'd':
			case 'D':flag[3]=1;
				//	count++;
						break;
			case 'e':
			case 'E':flag[4]=1;
				//	count++;
						break;
			case 'f':
			case 'F':flag[5]=1;
				//	count++;
						break;
			case 'g':
			case 'G': flag[6]=1;
					//	count++;
						break;
			case 'h':
			case 'H': flag[7]=1;
					//	count++;
						break;
			case 'i':
			case 'I': flag[8]=1;
					//	count++;
						break;
			case 'j':
			case 'J': flag[9]=1;
					//	count++;
						break;
						
			case 'k':
			case 'K': flag[10]=1;
					//	count++;
						break;
			case 'l':
			case 'L': flag[11]=1;
						//count++;
						break;
			case 'm':
			case 'M': flag[12]=1;
						//count++;
						break;
			case 'n':
			case 'N': flag[13]=1;
						//count++;
						break;
					
		
			case 'o':
			case 'O':flag[14]=1;
				//	count++;
						break;
			case 'p':
			case 'P':flag[15]=1;
				//	count++;
						break;
			case 'q':
			case 'Q':flag[16]=1;
				//	count++;
						break;
			case 'r':
			case 'R':flag[17]=1;
				//	count++;
						break;
			case 's':
			case 'S':flag[18]=1;
				//	count++;
						break;
			case 't':
			case 'T': flag[19]=1;
					//	count++;
						break;
			case 'u':
			case 'U': flag[20]=1;
					//	count++;
						break;
			case 'v':
			case 'V': flag[21]=1;
					//	count++;
						break;
			case 'w':
			case 'W': flag[22]=1;
					//	count++;
						break;
						
			case 'x':
			case 'X': flag[23]=1;
					//	count++;
						break;
			case 'y':
			case 'Y': flag[24]=1;
						//count++;
						break;
			case 'z':
			case 'Z': flag[25]=1;
						//count++;
						break;
			
						
		}
	}
}
	else 
	{
			if(num_flag[*(ptr+i)-48]!=1&&*(ptr+i)!=0)
			{
			
			insert(*(ptr+i));
			push(parent_track,&origin_stack,&origin_stack_top);
			switch(*(ptr+i))
		{
			
			case '0':num_flag[0]=1;
				//	count++;
						break;
			
			case '1':num_flag[1]=1;
				//	count++;
						break;
			
			case '2':num_flag[2]=1;
				//	count++;
						break;
			
			case '3':num_flag[3]=1;
				//	count++;
						break;
			
			case '4':num_flag[4]=1;
				//	count++;
						break;
		
			case '5':num_flag[5]=1;
				//	count++;
						break;
			
			case '6': num_flag[6]=1;
					//	count++;
						break;
			
			case '7': num_flag[7]=1;
					//	count++;
						break;
	
			case '8': num_flag[8]=1;
					//	count++;
						break;
		
			case '9': num_flag[9]=1;
					//	count++;
						break;
					}
}
		
		
		
		
	}
	
	}
	//	printf("count=%d\n",count);
//		printf("Displaying queue:\n");
//	for(i=front;i<=rear;i++)
//	{
//		printf("%c ",queue[i]);
//	}
//	printf("\n");

update_start_ptr(delete());

//	switch(delete())
//		{
//			case 'a':
//			case 'A':	ptr=bucket;
//						break;
//			case 'b':
//			case 'B':	ptr=bucket+n;
//						break;
//			case 'c':
//			case 'C':	ptr=bucket+2*n;
//						break;
//			case 'd':
//			case 'D':ptr=bucket+3*n;
//						break;
//			case 'e':
//			case 'E':ptr=bucket+4*n;
//						break;
//			case 'f':
//			case 'F':ptr=bucket+5*n;
//						break;
//			case 'g':
//			case 'G':ptr=bucket+6*n;
//						break;
//				case 'h':
//			case 'H': ptr=bucket+7*n;
//						break;
//			case 'i':
//			case 'I': ptr=bucket+8*n;
//						break;
//			case 'j':
//			case 'J': ptr=bucket+9*n;
//					
//						break;
//						
//			case 'k':
//			case 'K': ptr=bucket+10*n;
//						break;
//			case 'l':
//			case 'L': ptr=bucket+11*n;
//						break;
//			case 'm':
//			case 'M':	ptr=bucket+12*n;
//						break;
//			case 'n':
//			case 'N':	ptr=bucket+13*n;
//						break;
//			case 'o':
//			case 'O':	ptr=bucket+14*n;
//						break;
//			case 'p':
//			case 'P':ptr=bucket+15*n;
//						break;
//			case 'q':
//			case 'Q':ptr=bucket+16*n;
//						break;
//			case 'r':
//			case 'R':ptr=bucket+17*n;
//						break;
//			case 's':
//			case 'S':ptr=bucket+18*n;
//						break;
//			case 't':
//			case 'T': ptr=bucket+19*n;
//						break;
//			case 'u':
//			case 'U': ptr=bucket+20*n;
//						break;
//			case 'v':
//			case 'V': ptr=bucket+21*n;
//					
//						break;
//						
//			case 'w':
//			case 'W': ptr=bucket+22*n;
//						break;
//			case 'x':
//			case 'X': ptr=bucket+23*n;
//						break;
//			case 'y':
//			case 'Y': ptr=bucket+24*n;
//						break;
//			case 'z':
//			case 'Z': ptr=bucket+25*n;
//						break;
//			case '0':ptr=bucket+26*n;
//						break;
//			case '1':ptr=bucket+27*n;
//					 break;	
//			case '2':ptr=bucket+28*n;
//						break;
//			case '3':ptr=bucket+29*n;
//					 break;	
//			case '4':ptr=bucket+30*n;
//						break;
//			case '5':ptr=bucket+31*n;
//					 break;	
//			case '6':ptr=bucket+32*n;
//						break;
//			case '7':ptr=bucket+33*n;
//					 break;	
//			case '8':ptr=bucket+34*n;
//					 break;	
//			case '9':ptr=bucket+35*n;
//						break;
//					
//			
//						
//						
//		}
		count++;
	}
//	printf("Displaying queue:\n");
//	for(i=front;i<=rear;i++)
//	{
//		printf("%c ",queue[i]);
//	}
//	printf("final stack\n");
//	for(i=0;i<stack_top;i++)
//	{
//		printf("%c ",stack[i]);
//	}
//	printf("ORIGIN stack\n");
//	for(i=0;i<=origin_stack_top;i++)
//	{
//		printf("%c ",origin_stack[i]);
//	}
	
//	printf("des char %c",dest_char);
	for(i=0;i<stack_top;i++)
	{
		if(stack[i]==start_char)
			start_pos=i;
		if(stack[i]==dest_char)
			end_pos=i;
		
	}
//	printf("Start pos: %d\tEnd pos: %d\n",start_pos,end_pos);
	for(i=end_pos;i>=start_pos;i--)
	{
		//dest_char=origin_stack[i];
		for(j=0;j<=i;j++)
		{
			if(stack[j]==dest_char&&stack[j]!=start_char)
			{
				
				dest_char=origin_stack[j];
			//	printf("Destination character: %c\n",origin_stack[j]);
						price++;

				break;
			}
		}
	}
	printf("cost from %c -> %c: %d\n",str[k],str[k+1],price);
	for(i=0;i<n;i++)
	{
		stack[i]=0;
		origin_stack[i]=0;
	}
		front=-1;rear=-1;stack_top=-1;origin_stack_top=-1;
		price=0;
		count=0;
		parent_track='0';
}
	return 0;	
}
