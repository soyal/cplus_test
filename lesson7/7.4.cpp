// 类的作用域
typedef double Money;
class Account {
  typedef double Money;

  public:
    Money balance() { return bal; }
  private:
    Money bal;

    // 在这里声明Money，前面的balance的声明中的返回值中的Money是获取不到这个声明的
    typedef double Money;
}