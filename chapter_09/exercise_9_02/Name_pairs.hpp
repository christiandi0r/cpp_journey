#ifndef NAME_PAIRS_HPP
#define NAME_PAIRS_HPP

class Name_pairs
{
    public:
    
        void read_names();
        void read_ages();
        void print();
        void sort();
        
    private:
        
        std::vector<std::string> names;
        std::vector<double> ages;
};

#endif
