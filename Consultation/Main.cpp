 #include <iostream>
#include <string>


struct book {
	std::string title;
	std::string auther;
	int year =1970;
	int pages = 1;
	int price = 0;

};




int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	

	book* books = new book[2]{
		{"Book1",
		"Ivan Ivanov",
		2010,
		105,
		90
	 },
		{
			"Alice in the Wonderland",
			"LC",
			1920,
			400,500
}
	};

	delete[]books; 

	return 0;
}