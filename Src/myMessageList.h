#define EMPTY_EVENT_FLAGS 0x0000

// Possible messages received via UART
typedef enum {
    MESSAGE_STOP = 0x00,
    MESSAGE_N = 0x01,
    MESSAGE_NE = 0x02,
    MESSAGE_E = 0x03,
    MESSAGE_SE = 0x04,
    MESSAGE_S = 0x05,
    MESSAGE_SW = 0x06,
    MESSAGE_W = 0x07,
    MESSAGE_NW = 0x08,
    MESSAGE_BT_CONNECT = 0x0A,
    MESSAGE_START_CHALLENGE_MUSIC = 0x0B,
    MESSAGE_STOP_CHALLENGE_MUSIC = 0x0C,
    MESSAGE_START_VICTORY_TUNE = 0x0D
} message_list_t;

// The event flag bits for each task
typedef enum {
    ALL_EVENTS_HANDLED_EF_MASK = 0b1,
    MOTOR_DIR_CHANGE_EF_MASK = 0b10,
    BT_CONNECT_EF_MASK = 0b100,
    EXT_LED_BOT_MOVING_EF_MASK = 0b1000,
    EXT_LED_BOT_STATIONERY_EF_MASK = 0b10000,
    
    BT_CONNECT_SUCCESS_MASK = 0x10,
    START_CHALLENGE_MASK = 0x20,
    STOP_CHALLENGE_MASK = 0x40,
    START_VICTORY_MASK = 0x80,
} event_flags;

