/*
Test a int stack
*/

#include <tstack.h>

int main()
{
	fsu::Stack<int, 200> s;
  cout << "Capacity " << s.Capacity() << "\n";
	for(size_t i = 0; i < 26; i++)
	{
  		s.Push(i);
  		std::cout << "Top " << s.Top() << '\n';
	}
	cout << "Size " << s.Size() << "\n";
	cout << "Pop " << s.Pop() << "\n";
	cout << "Pop " << s.Pop() << "\n";
  s.SetOFC(' ');
	s.Display(cout);
	cout << "\n";

  fsu::Stack<int, 200> sc(s);

	s.Clear();
	cout << "Is stack empty " << s.Empty() << "\n";

  cout << "Copy constructor \n";
  sc.Dump(cout);
	return 0;
}


