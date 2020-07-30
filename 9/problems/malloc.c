
void function3() {
    int e = 50;
}

void function2() {
    int d = 40;
}

void function1() {
    int c = 30;
    function2();
    function3();
}

int main(void) {
    
    int a = 10;
    int b = 20;
    
    function1();
}
