struct Matrix{
private:
    int* data;
    int n, m;
public:
    Matrix(int n = 5, int m = 5);
    ~Matrix();
    
    void print() const;
    
    const int* operator[](int idx) const;
    int* operator[](int idx);
};

