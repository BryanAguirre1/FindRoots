#include <iostream> 
#include <cmath> 
#include <sstream>
	
using namespace std;

int main(int argc, char *argv[]) 
{ 
	int C3, C2, C1, C0; 
	int res; 
	int i; 
	int res1, res2, res3, res4; 
	int discriminant; 
	int C0aux;
	float root1, root2, root3; 
	float sqrtDiscriminant; 
	bool aux = false;
	
	if(argc == 5)
	{		
		if(istringstream(argv[1]) >> C3 && istringstream(argv[2]) >> C2 && istringstream(argv[3]) >> C1 && istringstream(argv[4]) >> C0)
		{
			int C0aux = C0;
			
			if (C0aux < 0){
				C0aux = -1 * C0aux;
			}

			//finding the 1st root 
			for(i = 0; i <= C0aux; i++) 
			{
				res = (pow(i, 3) * C3) + (pow(i, 2) * C2) + (i * C1) + (C0);
				if(res == 0)
				{
					aux = true;
					root1 = i;
					break;
					
				}else continue; 
			}
		
			C0aux = -1*C0aux;
			
			for(i = C0aux; i <= 0; i++) 
			{
				res = (pow(i, 3) * C3) + (pow(i, 2) * C2) + (i * C1) + (C0); 
				if(res == 0) 
				{
					aux = true;
					root1 = i;
					break; 
					
				}else continue; 
			}

			if(aux == true){
				
				//synthetic division and reducing cubic to quadratic eqaution
				res1 = (root1 * 0) + C3;
				res2 = (res1 * root1) + C2; 
				res3 = (res2 * root1) + C1; 
				res4 = (res3 * root1) + C0;
				  
				 
				//using the quadratic formula 
				discriminant = ((res2 * res2) - (4 * res1 * res3));   //b^2 -4ac >= 0   real roots 
				
				if(discriminant >= 0){
				
					sqrtDiscriminant = sqrt(discriminant);
			
					root2 = ((-1 * res2) - (sqrtDiscriminant)) / (2 * res1); 
					 
					root3 = ((-1 * res2) + (sqrtDiscriminant)) / (2 * res1); 
					
					cout<<"{"<<root1<<", "<<root2<<", "<<root3<<"}";
				
				}else
				{
					cout<<"{"<<root1<<"}";
				}	
			}else
			{
				cout<<"{}";
			}

		}else
		{
			cout<<"INVALID COEFFICIENTS";
		} 
		
	}else
	{
		cout<<"ENTER THE NECESSARY COEFFICIENTS";
	}
	
	return 0; 
}

