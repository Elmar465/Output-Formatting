#include <iostream>
#include <iomanip>
int main()
{
    std::cout <<"Hello ";
    std::cout << "World";
    
    std::cout <<std::endl;
    std::cout<<"*********" <<std::endl;

    std::cout<<"Hello"<< std::endl;
    std::cout<<"World"<< std::endl;

    std::cout<<std::endl;

    std::cout<<"Hello\n";
    std::cout<<"World\n";

    std::cout<<std::endl;

    std::cout<<"Unformatted table" << std::endl;
    std::cout<<"Elmar" << " "<< "Jafarli"<<std::endl;
    std::cout<<"Firudin"<<" " << "Baghirov"<<std::endl;
    std::cout<<"Joe" << " " << "Ball"<<std::endl;
    std::cout<<"Jordan" << " " << " Parker "<<std::endl;

    std::cout<<std::endl;
    std::cout<<"Formatted table : " << std::endl;
    std::cout<< std::setw(10) << "Lastname" <<std::setw(10) << "Firstname" <<std::setw(5)<< "Age" <<std::endl;
    std::cout<< std::setw(10) <<"Elmar" <<std::setw(10) << "Jafarli" << std::setw(5) << "28" <<std::endl;
    std::cout << std::setw(10) << "Firudin" << std::setw(10) <<"Baghirov" << std::setw(5) << "26" << std::endl;
    std::cout<< std::setw(10) << "Resad" <<std::setw(10) <<"Xailqov" << std::setw(5) <<"27" << std::endl;
    std::cout<< std::setw(10) <<"Joe" << std::setw(10) <<"Ball" << std::setw(5) <<"28" << std::endl;
    std::cout<< std::setw(10) <<"Jordan" << std::setw(10) <<"Parker" << std::setw(5) <<"27" << std::endl;

    std::cout<<"***************" <<std::endl;

    int col_width = 20;

    std::cout<<std::right;
    std::cout<<std::setw(col_width)<<"Lastname" <<std::setw(col_width)<<"Firstname" <<std::setw(col_width)<<"Age" <<std::endl;
    std::cout<<std::setw(col_width)<<"Elmar" <<std::setw(col_width)<<"Jafarli" << std::setw(col_width)<<"28" <<std::endl;
    std::cout<<std::setw(col_width)<< "Firudin" << std::setw(col_width)<<"Baghirov" << std::setw(col_width)<<"26" << std::endl;
    std::cout<<std::setw(col_width)<< "Resad" <<std::setw(col_width)<<"Xailqov" << std::setw(col_width)<<"27" << std::endl;
    
    // Internal justifed: sign is left justified , data is right justified

    // std::cout<<std::endl;
    // std::cout<<"Internal justifed"<< std::endl;
    // std::cout<< std::right;
    // std::cout<< std::setw(10) << -123,45 <<std::endl;
    // std::cout <<std::inte rnal;
    // std::cout<<std::setw(10) << -123,45 <<std::endl;

    std::cout <<std::left;
    std::cout<<std::setfill('-');
    std::cout <<std::setw(col_width) << "LastName" << std::setw(col_width) << "FirstName" << std::setw(col_width)<<"Age" <<std::endl;
    std::cout<< std::setw(col_width) <<"Elmar" <<std::setw(col_width)<<"Jafarli" << std::setw(col_width)<<"28" <<std::endl;
    std::cout<< std::setw(col_width) << "Firudin" << std::setw(col_width)<<"Baghirov" << std::setw(col_width)<<"26"<< std::endl;
    std::cout<< std::setw(col_width) << "Resad" <<std::setw(col_width)<<"Xailqov" << std::setw(col_width)<<"27"<< std::endl;
    std::cout<< std::setw(col_width) << "Joe" << std::setw(col_width) <<"Ball" <<std::setw(col_width)<<"29"<<std::endl;

    bool condition {false};
    bool other_condition {true};

    std::cout <<"condition : " << condition <<std::endl;
    std::cout <<"other_condition : " << other_condition <<std::endl;

    std::cout <<std::endl;
    std::cout <<std::boolalpha;
    std::cout <<"condition : " << condition <<std::endl;
    std::cout <<"other_condition : " << other_condition <<std::endl;

    std::cout<<std::endl;
    std::cout <<std::noboolalpha;
    std::cout <<"condition : " << condition <<std::endl;
    std::cout <<"other_condition : " << other_condition <<std::endl;
    std::cout<<std::endl;
    int post_num {34};
    int neg_num {-45};

    std::cout <<"positiv number : " << post_num << std::endl;
    std::cout <<"negative number : " << neg_num << std::endl;

    std::cout <<std::endl;
    std::cout <<std::boolalpha;
    std::cout <<"positiv number : " << post_num << std::endl;
    std::cout <<"negative number : " << neg_num << std::endl;
    std::cout<<std::endl;
    std::cout<<std::showpos;
    std::cout<<"positiv number : " << post_num << std::endl;
    std::cout<<"negative number : " << neg_num << std::endl;
    std::cout<<std::noshowpos;
    std::cout<<std::endl;
    std::cout <<std::noshowpos;
    std::cout<<"positiv number : " << post_num << std::endl;
    std::cout<<"negative number : " << neg_num << std::endl;
    
    int pos_int {717171};
    int neg_int {-47347};
    double doube_var {498.32};

    std::cout<<std::endl;
    std::cout <<" post_int in different bases : " << std::endl;
    std::cout << "post_int in (dec) : " << std::dec << pos_int <<std::endl;
    std::cout << "post_int in (hex) : " << std::hex<< pos_int <<std::endl;
    std::cout << "post_int in (oct) : " << std::oct << pos_int <<std::endl;

    std::cout << std::endl;
    std::cout <<" neg_int in different bases : " << std::endl;
    std::cout << "neg_int in (dec) : " << std::dec << neg_int <<std::endl;
    std::cout << "neg_int in (hex) : " << std::hex  << neg_int <<std::endl;
    std::cout << "neg_int in (oct) : " << std::oct  << neg_int <<std::endl;
    
    std::cout << std::endl;
    std::cout <<" doube_var in different bases : " << std::endl;
    std::cout << "doube_var in (dec) : " << std::dec << doube_var <<std::endl;
    std::cout << "doube_var in (hex) : " << std::hex << doube_var <<std::endl;
    std::cout << "doube_var in (oct) : " <<std::oct << doube_var <<std::endl;

    std::cout<<std::endl;
    std::cout <<" post_int (nohowbase : default) : " << std::endl;
    std::cout << "post_int in (dec) : " << std::dec << pos_int <<std::endl;
    std::cout << "post_int in (hex) : " << std::hex<< pos_int <<std::endl;
    std::cout << "post_int in (oct) : " << std::oct << pos_int <<std::endl;

    std::cout<< "post_int (showbase : default) : " << std::endl;
    std::cout<<std::showbase;
    std::cout <<"post_int in (dec) : " << std::dec << pos_int <<std::endl;
    std::cout <<"post_int in (hex) : " << std::hex<< pos_int <<std::endl;
    std::cout <<"post_int in (oct) : " << std::oct << pos_int <<std::endl; 

    std::cout<<std::endl;
    std::cout << "no uppercase : default : " << std::endl;
    std::cout<<std::nouppercase;
    std::cout <<"post_int in (dec) : " << std::dec << pos_int <<std::endl;
    std::cout <<"post_int in (hex) : " << std::hex<< pos_int <<std::endl;
    std::cout <<"post_int in (oct) : " << std::oct << pos_int <<std::endl;

    std::cout<<std::endl;
    std::cout <<"uppercase : default : " << std::endl;
    std::cout<<std::uppercase;
    std::cout <<"post_int in (dec) : " << std::dec << pos_int <<std::endl;
    std::cout <<"post_int in (hex) : " << std::hex<< pos_int <<std::endl;
    std::cout <<"post_int in (oct) : " << std::oct << pos_int <<std::endl;

    std::cout <<std::endl;
    double a {3.49348923213821398343};
    double b {2006.0};
    double c {1.34e-10};

    std::cout << std::endl;
    std::cout << "double values (default) : " << std::endl;
    std:: cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;

    std::cout <<std::endl;
    std::cout<< "double variables (fixed) : " << std::endl;
    std::cout <<std::fixed;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;

    std::cout<<std::endl;
    std::cout<<"double values (scientific) : " <<std::endl;
    std::cout<<std::scientific;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;

    std::cout<<std::endl;
    std::cout << "double value (back to defaults ) : " << std::endl;
    std::cout.unsetf(std::ios::scientific | std::ios::fixed);
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;

    std::cout << std::endl;
    long double  q = 3.12321412313123123131231;
    std::cout <<std::endl;
    std::cout << "a(default precisio(6)) : " << a << std::endl;
    std::cout << std::setprecision(10);
    std::cout << "a(precision(10)) : " << a << std::endl;
    std::cout << std::setprecision(20);
    std::cout << "a(precision(20)) : " << a << std::endl;
    std::cout << std::setprecision(30);
    std::cout << "a(precision(30)) : " << a << std::endl;
    std::cout << std::setprecision(40);
    std::cout << "a(precision(40)) : " << a << std::endl;

    // Reset precision to 6
    std::cout << std::setprecision(6);
    std::cout << "a(precision(6)) : "  << std::endl;

    std::cout << std::endl;

    double d {34.1};
    double e {101.99};
    double f {12.0};
    int g {45};

    std::cout << std::endl;
    std::cout << "noshowpoint (default) : " << std::endl;
    std::cout << std::noshowpoint;
    std::cout << "d : " << d << std::endl;
    std::cout << "e : " << e << std::endl;
    std::cout << "f : " << f << std::endl;
    std::cout << "g : " << g << std::endl;

    std::cout<<std::endl;
    std::cout << "showpoint : " << std::endl;
    std::cout << std::showpoint;
    std::cout << "d : " << d << std::endl;
    std::cout << "e : " << e << std::endl;
    std::cout << "f : " << f << std::endl;
    std::cout << "g : " << g << std::endl;
 
    return 0;
}