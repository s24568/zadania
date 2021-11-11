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
    int a = ask_user_for_integer("Podaj wartosc ");
    if(a<2)
    {
        std::cout << "Podana wartosc nie jest liczba pierwsza ";
    }
    else if(a>=2)
    {
        for(int i=2;i*i<=a;i++)
        {
            if(a%i==0)
            {
                std::cout << "Podana wartosc nie jest liczba pierwsza \n";
            }
            else
            {
                std::cout << "Podana wartosc jest liczba pierwsza \n";
            }
        }
        return 0;
    }
}
