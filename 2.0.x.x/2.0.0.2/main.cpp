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
    int c = ask_user_for_integer("Podaj wartosc c: ");
    if(c != 0)
    {
        for(int i = a; i<b; i++)
        {

            if((i%c) == 0 )
            {
                std::cout << i <<"\n";
            }
            else{}
        }
    }
    else
    {

        std::cout << "Nie dziel przez 0! \n";

    }

    return 0;
}
