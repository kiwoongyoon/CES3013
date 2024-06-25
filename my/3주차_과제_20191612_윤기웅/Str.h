class Str {
  private:
    char *str;
    int len;
  public:
    Str(int leng);
    Str(char *neyong);// neyong은 초기화할 내용이 들어감.
    ~Str();
    int length(void);
    char *contents(void);
    int compare(class Str &a); // a의 내용과 strcmp
    int compare(char *a);; // a의 내용과 strcmp
    void operator=(char *a); // string의 값을 대입.
    void operator=(class Str &a); // Str의 내용을 대입.
};
