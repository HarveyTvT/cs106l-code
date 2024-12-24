
class Widget {
  public:
    Widget();
    Widget(const Widget& w);
    Widget& operator=(const Widget& w);
    ~Widget();
    Widget(Widget&& rhs);
    Widget& operator=(Widget&& rhs);
};
