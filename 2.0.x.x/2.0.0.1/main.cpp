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
    int i;

    for(int i=a;i<b;i++)
    {
        std::cout << i <<"\n";
    }
return 0;
}
