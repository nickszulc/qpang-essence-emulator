#ifndef _OPCODES_HPP
#define _OPCODES_HPP

enum class Opcode : uint16_t
{
	KEY_EXCHANGE = 1,
	KEY_EXCHANGE_RSP = 2,


	AUTH_LOGIN = 500,
	AUTH_LOGIN_RSP = 501,
	AUTH_LOGIN_FAIL = 502,


	LOBBY_LOGIN = 600,
	LOBBY_LOGIN_RSP = 601,
	LOBBY_LOGIN_FAIL = 602,

	LOBBY_BUDDY_SET_ONLINE = 603,
	LOBBY_BUDDY_SET_OFFLINE = 607,

	LOBBY_EQUIP_ARMOUR = 620,
	LOBBY_EQUIP_ARMOUR_RSP = 621,

	LOBBY_EQUIP_WEAPON = 623,
	LOBBY_EQUIP_WEAPON_RSP = 624,

	LOBBY_EQUIPPED_SKILLS = 646,
	LOBBY_EQUIPPED_SKILS_RSP = 647,

	LOBBY_DROP_CARD = 652,
	LOBBY_DROP_CARD_RSP = 653,

	LOBBY_OPEN_GM_CARD = 655,
	LOBBY_OPEN_GM_CARD_RSP = 656,

	LOBBY_REGISTER_NAME = 667,
	LOBBY_REGISTER_NAME_RSP = 668,

	LOBBY_SERVER_ERROR = 669,

	LOBBY_REGISTER_CHARACTERS = 670,
	LOBBY_REGISTER_CHARACTERS_RSP = 671,

	LOBBY_SWAP_CHARACTER = 679,
	LOBBY_SWAP_CHARACTER_RSP = 680,

	LOBBY_PLAYERINFO = 691,
	LOBBY_PLAYERINFO_RSP = 692,

	LOBBY_BUDDIES = 694,
	LOBBY_BUDDIES_RSP = 695,

	LOBBY_FRIEND_INVITE = 697,
	LOBBY_FRIEND_INVITE_RSP = 698,
	LOBBY_FRIEND_INVITE_FAIL = 699,

	LOBBY_ADD_INCOMING_FRIEND = 700,
	LOBBY_ACCEPT_INCOMING_FRIEND = 701,
	LOBBY_ACCEPT_INCOMING_FRIEND_RSP = 702,
	LOBBY_OUTGOING_FRIEND_ACCEPTED = 704,
	LOBBY_DENY_INCOMING_FRIEND = 705,
	LOBBY_DENY_INCOMING_FRIEND_RSP = 706,
	LOBBY_OUTGOING_FRIEND_DENIED = 708,

	LOBBY_REMOVE_OUTGOING_FRIEND = 709,
	LOBBY_REMOVE_OUTGOING_FRIEND_RSP = 710,

	LOBBY_REMOVE_INCOMING_FRIEND = 712,

	LOBBY_REMOVE_FRIEND = 713,
	LOBBY_REMOVE_FRIEND_RSP = 714,
	LOBBY_FRIEND_REMOVE_FRIEND = 716,

	LOBBY_RECEIVE_INVITE = 717,
	LOBBY_RANDOM_INVITE = 721,


	LOBBY_MEMOS = 725,
	LOBBY_MEMOS_RSP = 726,

	LOBBY_SEND_MEMO = 728,
	LOBBY_SEND_MEMO_RSP = 729,
	LOBBY_SEND_MEMO_FAIL = 730,
	LOBBY_RECEIVE_MEMO = 731,
	LOBBY_OPEN_MEMO = 732,
	LOBBY_OPEN_MEMO_RSP = 733,

	LOBBY_DELETE_MEMO = 735,
	LOBBY_DELETE_MEMO_RSP = 736,

	LOBBY_WHISPER = 738,
	LOBBY_WHISPER_RSP = 739,
	LOBBY_WHISPER_FAIL = 740,

	LOBBY_OPEN_PLAYER_CARD = 742,
	LOBBY_OPEN_PLAYER_CARD_RSP = 743,

	//Option cards [not settings]
	LOBBY_GIFTS = 745,
	LOBBY_GIFTS_RSP = 746,

	LOBBY_ROOM_REQUEST_STATS = 751,
	LOBBY_ROOM_REQUEST_STATS_RSP = 752,

	LOBBY_GAMEROOMS = 758,
	LOBBY_GAMEROOMS_RSP = 759,

	LOBBY_CHANNELS = 762,
	LOBBY_CHANNELS_RSP = 763,

	LOBBY_CHANNEL_CONNECT = 766,
	LOBBY_CHANNEL_CONNECT_RSP = 767,

	LOBBY_GAMESERVER_REFRESH = 769,
	LOBBY_GAMESERVER_REFRESH_RSP = 770,

	LOBBY_REGISTER_CARD_FAIL = 779,

	LOBBY_INVENTORY_CARDS = 780,
	LOBBY_INVENTORY_CARDS_RSP = 781,

	LOBBY_PLAYER_RANKING = 791,
	LOBBY_PLAYER_RANKING_RSP = 792,

	LOBBY_REQUEST_GOODS = 797,
	LOBBY_NORMAL_GOODS = 798,

	LOBBY_REQUEST_PACKAGE_GOODS = 800,
	LOBBY_REQUEST_PACKAGE_GOODS_RSP = 801,

	LOBBY_BUY_ITEM = 803,
	LOBBY_BUY_ITEM_RSP = 804,
	LOBBY_BUY_ITEM_FAIL = 805,

	LOBBY_GIFT_ITEM = 812,
	LOBBY_GIFT_ITEM_RSP = 813,
	LOBBY_GIFT_ITEM_FAIL = 814,

	LOBBY_SHOP_GIFT = 815,
	LOBBY_SHOP_GIFT_RSP = 816,
	LOBBY_SHOP_GIFT_FAIL = 820,

	LOBBY_RECEIVE_GIFT = 821,

	LOBBY_TUTORIAL_PART_FINISH = 822,
	LOBBY_TUTORIAL_PART_FINISH_RSP = 823,

	LOBBY_REQUEST_CASH = 831,
	LOBBY_REQUEST_CASH_RSP = 832,

	LOBBY_OPEN_FUNC_CARD_FAIL = 833,

	LOBBY_REGISTRATION_FAIL = 836,

	LOBBY_RECORD_CLEAR_FAIL = 840,
	LOBBY_KILL_DEATH_CLEAR_FAIL = 843,


	LOBBY_RECEIVE_GM_INVITE = 857,

	LOBBY_USE_FUNC_CARD_RSP = 864,

	LOBBY_BUDDY_ADD_FAIL = 865,

	LOBBY_TRADE_ERROR_1 = 874,

	LOBBY_TRADE = 875,
	LOBBY_TRADE_RSP = 876,

	LOBBY_TRADE_ERROR_2 = 878,

	LOBBY_TRADE_ACT = 884,
	LOBBY_TRADE_ACT_RSP = 885,

	LOBBY_TRADE_ERROR_3 = 887,
	LOBBY_TRADE_ERROR_4 = 890,

	LOBBY_USE_CRANE = 897,
	LOBBY_USE_CRANE_RSP = 898,
	LOBBY_USE_CRAIN_FAIL = 899,

	LOBBY_ENCHANT_FAIL = 902,
	

	SQUARE_LOGIN = 6500,
	SQUARE_LOGIN_RSP = 6501,

	SQUARE_PLAYER_JOIN = 6506,
	SQUARE_ADD_PLAYER = 6507,
	SQUARE_LOAD_PLAYERS = 6508,
	SQUARE_REMOVE_PLAYER = 6509,

	SQUARE_PLAYER_MOVE = 6510,
	SQUARE_MOVE_PLAYER = 6513,

	SQUARE_PLAYER_UPDATE = 6514,
	SQUARE_UPDATE_PLAYER = 6517,

	SQUARE_CHAT = 6526,
	SQUARE_CHAT_RSP = 6529,

	SQUARE_JOIN_BACK = 6530,
	SQUARE_JOIN_BACK_RSP = 6531,

	SQUARE_JOIN_PARK = 6537,
	SQUARE_JOIN_PARK_RSP = 6538,
	
	SQUARE_JOIN_PARK_FAIL = 6539,

	SQUARE_UPDATE_LIST = 6543,
	SQUARE_START_TUTORIAL = 6544,

	SQUARE_PLAYER_CHANGE_STATE = 6547,

	SQUARE_PLAYER_CHANGE_LEVEL = 6553,
	SQUARE_PLAYER_CHANGE_CHANNEL = 6554,
	SQUARE_PLAYER_CHANGE_CHANNEL_RSP = 6555,

	SQUARE_PLAYER_EMOTE = 6557,
	SQUARE_EMOTE_PLAYER = 6558,

	//OUR OWN CUSTOM EVENTS
	I_AM_ROOM = 7000,
	ROOM_REQUEST_AUTH = 7001,
	ROOM_REQUEST_AUTH_RSP = 7002,
	ROOM_REQUEST_PLAYER_EQUIPMENT = 7005,
	ROOM_REQUEST_PLAYER_EQUIPMENT_RSP = 7006,

	I_AM_AUTH = 8000,

	I_AM_LOBBY = 9000,
	LOBBY_NOTIFY = 9001,
	LOBBY_NOTIFY_RSP = 9002,
	
	REQUEST_EQUIPMENT = 9500,
	REQUEST_EQUIPMENT_RSP = 9501,
	UPDATE_PLAYER_LEVEL = 9502,

	I_AM_SQUARE = 10000,

	RELOAD_CRANE_COMMAND = 11000,
	RELOAD_LEADERBOARD_COMMAND = 11001,
	ANNOUNCEMENT = 11002,
	UPDATE_GAMEROOM = 11003,
};


#endif //_OPCODES_HPP