#pragma once

#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN GP4    // USART TX pin
#define SERIAL_USART_RX_PIN GP5    // USART RX pin

#define EE_HANDS // specify handedness when flashing

#define TAPPING_TERM 200
#define QUICK_TAP_TERM 150
#define PERMISSIVE_HOLD
// #define CHORDAL_HOLD // leave disabled - this messes with same-hand shortcuts
#define FLOW_TAP_TERM 100

#define COMBO_TERM 30
