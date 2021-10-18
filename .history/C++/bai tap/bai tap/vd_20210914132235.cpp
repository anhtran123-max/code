#include <iostream>
using namespace std;

class ArrayList {
public:
	static const int MAX_SIZE = 100; 
	ArrayList(); 			// initialize an empty list 
	bool isEmpty() const; 	// check if the list is empty
	int length() const; 	// get the number of elements in a list
	void insert(const int x, int i); 	// insert x at the position i
	void append(const int x); 	// insert x at the end of the list
	void remove(int i); 		// remove the ith element
	int& retrieve(int i) const; // return the value to the ith element
	void print() const; 	// print all element values
		
private:
	int element[MAX_SIZE];	// array to store all list elements
	int last;	// index of the last item
};
// Definition of all ArrayList methods
ArrayList::ArrayList(){
	last = -1;
}
bool ArrayList::isEmpty() const {
	return (last == -1);
}
int ArrayList::length() const {
	return (last+1);
}
void ArrayList::append(const int x){
	//case1:list full
	if((last+1==MAX_SIZE))
	{
		cout<<"List is full.";
	}
	else //case2:list cannot full
	{
		element[last+1]=x;
	}
}
void ArrayList::print() const {
	for(int i=0;i<=last;i++)
	{
		cout<<element[i]<<"  ";
	}
}
void ArrayList::insert(const int x,int i){
	//case1:List full
	if((last+1)==MAX_SIZE)
	{
		cout<<"List is full.";
	}
	else
	{		
		for(int m=last+1;m>i;m--)
		{
			element[m]=element[m-1];
		}
		element[i]=x;
	}
}
void ArrayList::remove(int i){
	for(int m=i;m<last;m++)
	{
		element[m]=element[m+1];
	}
}
// Main function
int main() {
	ArrayList list;
	
	//if (list.isEmpty())
		//cout << "Empty list";
	list.append(3);
	list.append(4);
	list.print();

	return 0;
}