/* Copyright (c) 2008 - 2010 Lukas Hetzenecker <LuHe@gmx.at> */
/* Generated fro pc/devices/status_numbers.py from series60-remote */

#define MAX_LENGTH 600

#define NUM_CONNECTED 100
#define NUM_HELLO_REQUEST 110
#define NUM_HELLO_REPLY 111
#define NUM_QUIT 120
#define NUM_PARTIAL_MESSAGE 130

#define NUM_CONTACTS_REQUEST_HASH_ALL 200
#define NUM_CONTACTS_REQUEST_HASH_SINGLE 201
#define NUM_CONTACTS_REQUEST_COUNT 202
#define NUM_CONTACTS_REQUEST_CONTACT 204
#define NUM_CONTACTS_REQUEST_CONTACTS_ALL 205
#define NUM_CONTACTS_REPLY_HASH_ALL 210
#define NUM_CONTACTS_REPLY_HASH_SINGLE_START 211
#define NUM_CONTACTS_REPLY_HASH_SINGLE_LINE 212
#define NUM_CONTACTS_REPLY_HASH_SINGLE_END 213
#define NUM_CONTACTS_REPLY_COUNT 214
#define NUM_CONTACTS_REPLY_CONTACT_START 220
#define NUM_CONTACTS_REPLY_CONTACT_LINE 221
#define NUM_CONTACTS_REPLY_CONTACT_END 222
#define NUM_CONTACTS_REPLY_CONTACTS_ALL_END 223
#define NUM_CONTACTS_REPLY_CONTACT_NOT_FOUND 224
#define NUM_CONTACTS_ADD 230
#define NUM_CONTACTS_ADD_REPLY_ID 231
#define NUM_CONTACTS_DELETE 232
#define NUM_CONTACTS_CHANGE_ADDFIELD 233
#define NUM_CONTACTS_CHANGE_REMOVEFIELD 234

#define NUM_SYSINFO_REQUEST 250
#define NUM_SYSINFO_REPLY_START 260
#define NUM_SYSINFO_REPLY_LINE 261
#define NUM_SYSINFO_REPLY_END 262

#define NUM_LOCATION_REQUEST 270
#define NUM_LOCATION_REPLY 271
#define NUM_LOCATION_REPLY_NA 272

#define NUM_MESSAGE_SEND_REQUEST 300
#define NUM_MESSAGE_SEND_REPLY_OK 301
#define NUM_MESSAGE_SEND_REPLY_STATUS 302
#define NUM_MESSAGE_SEND_REPLY_FAILURE 303
#define NUM_MESSAGE_SEND_REPLY_RETRY 304
#define NUM_SET_READ 320

#define NUM_MESSAGE_NEW 350
#define NUM_MESSAGE_REQUEST 351
#define NUM_MESSAGE_REPLY_LINE 352
#define NUM_MESSAGE_REPLY_END 353

#define NUM_MESSAGE_REQUEST_UNREAD 370
#define NUM_MESSAGE_REPLY_UNREAD 371

#define NUM_CALENDAR_REQUEST_HASH_ALL 380
#define NUM_CALENDAR_REQUEST_HASH_SINGLE 381
#define NUM_CALENDAR_REQUEST_ENTRY 382
#define NUM_CALENDAR_REQUEST_ENTRIES_ALL 383
#define NUM_CALENDAR_REPLY_HASH_ALL 384
#define NUM_CALENDAR_REPLY_HASH_SINGLE_START 385
#define NUM_CALENDAR_REPLY_HASH_SINGLE_LINE 386
#define NUM_CALENDAR_REPLY_HASH_SINGLE_END 387
#define NUM_CALENDAR_REPLY_ENTRIES_START 388
#define NUM_CALENDAR_REPLY_ENTRY 389
#define NUM_CALENDAR_REPLY_ENTRIES_END 390
#define NUM_CALENDAR_REPLY_ENTRY_NOT_FOUND 391
#define NUM_CALENDAR_ENTRY_ADD 395
#define NUM_CALENDAR_ENTRY_ADD_REPLY 396
#define NUM_CALENDAR_ENTRY_DELETE 397
#define NUM_CALENDAR_ENTRY_CHANGE 398
#define NUM_CALENDAR_ENTRY_CHANGE_REPLY_TIME 399

#define NUM_INCOMING_CALL 400

#define NUM_SCREENSHOT 900
#define NUM_SCREENSHOT_REPLY 901

#define NUM_DEBUG 999

#define NUM_END_HEADER 0x02   /* Start of Text */
#define NUM_SEPERATOR 0x1E   /* Record Separator */
#define NUM_END_TEXT 0x03   /* End of Text */

#define PROTOCOL_VERSION 1.5

