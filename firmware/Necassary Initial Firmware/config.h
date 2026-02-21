// --- GRBL CONFIGURATION FOR Axiom-2 ---

#define COREXY 
#define VARIABLE_SPINDLE // so the z-axis is tied to D11 now.
#define SPINDLE_PWM_MIN_VALUE 5     // Pen Down position (the range btw)
#define SPINDLE_PWM_MAX_VALUE 20    // Pen Up position (the range btw)
#define INVERT_LIMIT_PIN_MASK ((1<<X_LIMIT_BIT)|(1<<Y_LIMIT_BIT)|(1<<Z_LIMIT_BIT)) //for the sheild
#define BAUD_RATE 115200 // using so i can debug fast if i need to