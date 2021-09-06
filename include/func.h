enum Modules {
        MODULE_1 = 1,
        MODULE_2,
        MODULE_3,
        MODULE_5,
        MODULE_MAX
};
typedef void (*callback) ();
int check_ebit(int,int);
void register_event(int id, int e_bit, void (*ptr)());
void check_event(int inte_evnt);
void module_1(int evnt);
void module_2(int evnt);
void module_3(int evnt);
void module_4(int evnt);
void module_5(int evnt);
void init_module(int num_evnt);
