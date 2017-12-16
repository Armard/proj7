/*
Test a char stack
*/

#include <tstack.h>

int main()
{
	fsu::Stack<char> s;
	for(size_t i = 0; i < 26; i++)
	{
  		s.Push('a' + i);
  		std::cout << "Top " << s.Top() << '\n';
  	}
  	cout << "Size " << s.Size() << "\n";
  	cout << "Pop " << s.Pop() << "\n";
  	cout << "Pop " << s.Pop() << "\n";
  	s.Display(cout);
  	cout << "\n";

  	// check if we go overflow
  	for(size_t i = 0; i < 100; i++)
	{
		try 
		{
  			s.Push('a');
  			std::cout << "Top " << s.Top() << '\n';
  		}
  		catch(exception &e)
  		{
  			cout << "Exception " << e.what() << "\n";
  			break;	
  		}
  	}

  	s.Clear();
  	cout << "Is stack empty " << s.Empty() << "\n";
  	return 0;
}


