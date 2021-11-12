# include <iostream>
# include <string>

auto ask_user_for_integer ( std :: string const prompt ) -> int {
    if ( not prompt . empty ()) {
        std :: cout << prompt ;
    }
    auto value = std :: string {};
    std :: getline ( std :: cin , value );
    return std :: stoi ( value );
}
int main()
{
    int a = ask_user_for_integer("Podaj wartosc a: ");
    int b = ask_user_for_integer("Podaj wartosc b: ");
    int s = ask_user_for_integer("Podaj wartosc b: ");
	if(s != 0)
	{
		for(int i=a;i<b;i+=s)
		{
        	std::cout << i <<"\n";
		}
	}
	else
	{
		std::cout << "Podaj krok o wartości innej niż 0.\n";
	}
return 0;
}

