/* layer IDs */ 

#define DEF 0 // default = colemak
#define GAL 1 // gallium
#define NUM 2 // number 
#define NAV 3 // navigation
#define PTR 4 // pointer
#define SYS 5 // system

#undef COMBO_TERM 
#define COMBO_TERM 15
#define QUICK_TAP_MS 175
#define TAPPING_TERM_MS 220
#define PRIOR_IDLE_MS 150

#undef COMBO_HOOK
#define COMBO_HOOK require-prior-idle-ms = <20>;
