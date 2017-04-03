#ifndef APP_ROOMBA_H__
#define APP_ROOMBA_H__

#define ROOMBA_CMD_START								128
#define ROOMBA_CMD_ENTER_SAFE_MODE			131
#define ROOMBA_CMD_ENTER_FULL_MODE			132
#define ROOMBA_CMD_POWER_OFF						133
#define ROOMBA_CMD_CLEAN								135
#define ROOMBA_CMD_DOCK									143


//#define ROOMBA_NULL_TERM_CMD(OPCODE)		((const char*)(OPCODE<<8 | '\0'))
//void roombaPrintfCmd (uint8_t cmd);
//void ITM_SendString (uint8_t *str);
void roombaTxBuf (uint8_t *buf, uint16_t size);

#endif
