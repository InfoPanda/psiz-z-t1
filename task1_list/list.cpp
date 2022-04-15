#include "pch.h"
#include "list.h"
#include "iostream"
//Kacper_Golan

using  namespace std;


List* initList(void)
	// Function to check free memory
{
	List* pRoot = (List*)malloc(sizeof(*pRoot));
	
		if (pRoot != NULL)

		{
			pRoot->pNext = NULL;

			cout << "Status procesu = Sukces. Zalokowano pamięć" << endl;

		}	else if (pRoot == NULL)
		
			{ 			
					
				cout << "Status procesu = Niepowodzenie. Brak miejsca w pamięci." << endl;
				
			}	else
						
				{
							
					cout << "Status procesu = Błąd. Nie rozpoznano błędu." << endl;

				}

	return pRoot;
}

void deinitList(List* pRoot)
{
	if(NULL != pRoot)
	{
	 free(pRoot);
	 pRoot = NULL;
	}
}

void addCar(List* pRoot, char* plateNum)
{

}

void removeCar(List* pRoot, char* plateNum)
{

}
void printAll(List* pRoot) {

}

int numberOfElements(List* pRoot)
{
	return 0;
}
