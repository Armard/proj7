/*
Test a int stack
*/

#include <tstack.h>

#include <string>

int main()
{
	fsu::Stack<std::string> s;
  	cout << "Capacity " << s.Capacity() << "\n";
	for(size_t i = 0; i < 40; i++)
	{
		std::string p = "";
		p.append(1, 'a' + i % 26);
		p.append(1, 'a' + (i+1) % 26);
		p.append(1, 'a' + (i+2) % 26);
  		s.Push(p);
  		std::cout << "Top " << s.Top() << '\n';
	}
	cout << "Size " << s.Size() << "\n";
	cout << "Pop " << s.Pop() << "\n";
	cout << "Pop " << s.Pop() << "\n";
  	s.SetOFC(' ');
	s.Display(cout);
	cout << "\n";

  	return 0;
}


