    #include <fstream>
    using namespace std;

    void hello(ostream &out)
    {
        out << "hello world\n";
    }

    int main()
    {
        ofstream out1{ "/tmp/out1" }; // works
        hello(out1);
    
        fstream out2{ "/tmp/out2", std::ios::out }; // Now it works
        hello(out2);

        return 1;
    }

    /* The constructor for fstream has as default flags ios::in and ios::out, when the flag ios::in is set fstream will not create a file*/