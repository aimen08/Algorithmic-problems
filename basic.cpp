
#include <bits/stdc++.h>


int fun(){

	int T , N ;
	int i=0;
	std::cout << "\nEnter Test cases:"<<std::endl;
	std::cin >>T;
	while (i<T){
		std::cout << "Test case number:"<< i <<std::endl;
		std::cout << "Enter Number of how many number in the array :"<<std::endl;
		std::cin >> N;
		std::cout << "Enter numbers to fill in the array :"<<std::endl;
		

		int A[N];
		for(int i =0; i<N ; i++)std::cin>>A[i];
			int f= 0;
			while (f<N){
			int temp=A[N-1],j;
		for(j=N-1;j>=0;j--){
			A[j]=A[j-1];}
		A[0]=temp;
		}



		for (int i = 0; i < N; ++i)
				{
					/* code */
					std::cout<<A[i]<<"--";
				}		
		i++;
	}
}


int main (int argc,char const * argv[])
{
				
 	clock_t start,end ;   // creating clock variables 
   	start = clock();      // the clock function return a value 
 	
 	fun();                // calling fun function 
	end = clock(); 			

 	double time_taken = double(end-start)/double(CLOCKS_PER_SEC);  //doing the math to calculate how much i took the loop to end

 	

 	std::cout<<std::endl<<std::fixed<<time_taken<<std::setprecision(5)<<" sec"<<std::endl;		

 	
 		

	return 0;
}






