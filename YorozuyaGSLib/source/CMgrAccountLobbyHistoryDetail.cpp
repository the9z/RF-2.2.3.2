#include <CMgrAccountLobbyHistoryDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CMgrAccountLobbyHistoryctor_CMgrAccountLobbyHistory2_ptr CMgrAccountLobbyHistoryctor_CMgrAccountLobbyHistory2_next(nullptr);
        Info::CMgrAccountLobbyHistoryctor_CMgrAccountLobbyHistory2_clbk CMgrAccountLobbyHistoryctor_CMgrAccountLobbyHistory2_user(nullptr);
        
        Info::CMgrAccountLobbyHistoryGetNewFileName4_ptr CMgrAccountLobbyHistoryGetNewFileName4_next(nullptr);
        Info::CMgrAccountLobbyHistoryGetNewFileName4_clbk CMgrAccountLobbyHistoryGetNewFileName4_user(nullptr);
        
        Info::CMgrAccountLobbyHistoryIOThread6_ptr CMgrAccountLobbyHistoryIOThread6_next(nullptr);
        Info::CMgrAccountLobbyHistoryIOThread6_clbk CMgrAccountLobbyHistoryIOThread6_user(nullptr);
        
        Info::CMgrAccountLobbyHistoryOnLoop8_ptr CMgrAccountLobbyHistoryOnLoop8_next(nullptr);
        Info::CMgrAccountLobbyHistoryOnLoop8_clbk CMgrAccountLobbyHistoryOnLoop8_user(nullptr);
        
        Info::CMgrAccountLobbyHistoryWriteFile10_ptr CMgrAccountLobbyHistoryWriteFile10_next(nullptr);
        Info::CMgrAccountLobbyHistoryWriteFile10_clbk CMgrAccountLobbyHistoryWriteFile10_user(nullptr);
        
        Info::CMgrAccountLobbyHistoryadd_char_complete12_ptr CMgrAccountLobbyHistoryadd_char_complete12_next(nullptr);
        Info::CMgrAccountLobbyHistoryadd_char_complete12_clbk CMgrAccountLobbyHistoryadd_char_complete12_user(nullptr);
        
        Info::CMgrAccountLobbyHistoryadd_char_request14_ptr CMgrAccountLobbyHistoryadd_char_request14_next(nullptr);
        Info::CMgrAccountLobbyHistoryadd_char_request14_clbk CMgrAccountLobbyHistoryadd_char_request14_user(nullptr);
        
        Info::CMgrAccountLobbyHistorydel_char_complete16_ptr CMgrAccountLobbyHistorydel_char_complete16_next(nullptr);
        Info::CMgrAccountLobbyHistorydel_char_complete16_clbk CMgrAccountLobbyHistorydel_char_complete16_user(nullptr);
        
        Info::CMgrAccountLobbyHistorydel_char_request18_ptr CMgrAccountLobbyHistorydel_char_request18_next(nullptr);
        Info::CMgrAccountLobbyHistorydel_char_request18_clbk CMgrAccountLobbyHistorydel_char_request18_user(nullptr);
        
        Info::CMgrAccountLobbyHistoryenter_lobby20_ptr CMgrAccountLobbyHistoryenter_lobby20_next(nullptr);
        Info::CMgrAccountLobbyHistoryenter_lobby20_clbk CMgrAccountLobbyHistoryenter_lobby20_user(nullptr);
        
        Info::CMgrAccountLobbyHistorylobby_disconnect22_ptr CMgrAccountLobbyHistorylobby_disconnect22_next(nullptr);
        Info::CMgrAccountLobbyHistorylobby_disconnect22_clbk CMgrAccountLobbyHistorylobby_disconnect22_user(nullptr);
        
        Info::CMgrAccountLobbyHistoryplayer_create24_ptr CMgrAccountLobbyHistoryplayer_create24_next(nullptr);
        Info::CMgrAccountLobbyHistoryplayer_create24_clbk CMgrAccountLobbyHistoryplayer_create24_user(nullptr);
        
        Info::CMgrAccountLobbyHistoryplayer_create_complete_money26_ptr CMgrAccountLobbyHistoryplayer_create_complete_money26_next(nullptr);
        Info::CMgrAccountLobbyHistoryplayer_create_complete_money26_clbk CMgrAccountLobbyHistoryplayer_create_complete_money26_user(nullptr);
        
        Info::CMgrAccountLobbyHistoryplayer_money_fix28_ptr CMgrAccountLobbyHistoryplayer_money_fix28_next(nullptr);
        Info::CMgrAccountLobbyHistoryplayer_money_fix28_clbk CMgrAccountLobbyHistoryplayer_money_fix28_user(nullptr);
        
        Info::CMgrAccountLobbyHistoryrecovery_char_complete30_ptr CMgrAccountLobbyHistoryrecovery_char_complete30_next(nullptr);
        Info::CMgrAccountLobbyHistoryrecovery_char_complete30_clbk CMgrAccountLobbyHistoryrecovery_char_complete30_user(nullptr);
        
        Info::CMgrAccountLobbyHistoryreged_char_complete32_ptr CMgrAccountLobbyHistoryreged_char_complete32_next(nullptr);
        Info::CMgrAccountLobbyHistoryreged_char_complete32_clbk CMgrAccountLobbyHistoryreged_char_complete32_user(nullptr);
        
        Info::CMgrAccountLobbyHistoryreged_char_request34_ptr CMgrAccountLobbyHistoryreged_char_request34_next(nullptr);
        Info::CMgrAccountLobbyHistoryreged_char_request34_clbk CMgrAccountLobbyHistoryreged_char_request34_user(nullptr);
        
        Info::CMgrAccountLobbyHistorysel_char_complete36_ptr CMgrAccountLobbyHistorysel_char_complete36_next(nullptr);
        Info::CMgrAccountLobbyHistorysel_char_complete36_clbk CMgrAccountLobbyHistorysel_char_complete36_user(nullptr);
        
        Info::CMgrAccountLobbyHistorysel_char_request38_ptr CMgrAccountLobbyHistorysel_char_request38_next(nullptr);
        Info::CMgrAccountLobbyHistorysel_char_request38_clbk CMgrAccountLobbyHistorysel_char_request38_user(nullptr);
        
        Info::CMgrAccountLobbyHistorytutorial_process_report_recv40_ptr CMgrAccountLobbyHistorytutorial_process_report_recv40_next(nullptr);
        Info::CMgrAccountLobbyHistorytutorial_process_report_recv40_clbk CMgrAccountLobbyHistorytutorial_process_report_recv40_user(nullptr);
        
        
        Info::CMgrAccountLobbyHistorydtor_CMgrAccountLobbyHistory42_ptr CMgrAccountLobbyHistorydtor_CMgrAccountLobbyHistory42_next(nullptr);
        Info::CMgrAccountLobbyHistorydtor_CMgrAccountLobbyHistory42_clbk CMgrAccountLobbyHistorydtor_CMgrAccountLobbyHistory42_user(nullptr);
        
        
        void CMgrAccountLobbyHistoryctor_CMgrAccountLobbyHistory2_wrapper(struct CMgrAccountLobbyHistory* _this)
        {
           CMgrAccountLobbyHistoryctor_CMgrAccountLobbyHistory2_user(_this, CMgrAccountLobbyHistoryctor_CMgrAccountLobbyHistory2_next);
        };
        void CMgrAccountLobbyHistoryGetNewFileName4_wrapper(struct CMgrAccountLobbyHistory* _this, unsigned int dwAccountSerial, char* pszFileName)
        {
           CMgrAccountLobbyHistoryGetNewFileName4_user(_this, dwAccountSerial, pszFileName, CMgrAccountLobbyHistoryGetNewFileName4_next);
        };
        void CMgrAccountLobbyHistoryIOThread6_wrapper(void* pv)
        {
           CMgrAccountLobbyHistoryIOThread6_user(pv, CMgrAccountLobbyHistoryIOThread6_next);
        };
        void CMgrAccountLobbyHistoryOnLoop8_wrapper(struct CMgrAccountLobbyHistory* _this)
        {
           CMgrAccountLobbyHistoryOnLoop8_user(_this, CMgrAccountLobbyHistoryOnLoop8_next);
        };
        void CMgrAccountLobbyHistoryWriteFile10_wrapper(struct CMgrAccountLobbyHistory* _this, char* pszFileName, char* pszLog)
        {
           CMgrAccountLobbyHistoryWriteFile10_user(_this, pszFileName, pszLog, CMgrAccountLobbyHistoryWriteFile10_next);
        };
        void CMgrAccountLobbyHistoryadd_char_complete12_wrapper(struct CMgrAccountLobbyHistory* _this, char byRetCode, struct _REGED_AVATOR_DB* pInsertData, char* pszFileName)
        {
           CMgrAccountLobbyHistoryadd_char_complete12_user(_this, byRetCode, pInsertData, pszFileName, CMgrAccountLobbyHistoryadd_char_complete12_next);
        };
        void CMgrAccountLobbyHistoryadd_char_request14_wrapper(struct CMgrAccountLobbyHistory* _this, char* pszFileName)
        {
           CMgrAccountLobbyHistoryadd_char_request14_user(_this, pszFileName, CMgrAccountLobbyHistoryadd_char_request14_next);
        };
        void CMgrAccountLobbyHistorydel_char_complete16_wrapper(struct CMgrAccountLobbyHistory* _this, char byRetCode, char* pszFileName)
        {
           CMgrAccountLobbyHistorydel_char_complete16_user(_this, byRetCode, pszFileName, CMgrAccountLobbyHistorydel_char_complete16_next);
        };
        void CMgrAccountLobbyHistorydel_char_request18_wrapper(struct CMgrAccountLobbyHistory* _this, char bySlotIndex, unsigned int dwAvatorSerial, char* pszFileName)
        {
           CMgrAccountLobbyHistorydel_char_request18_user(_this, bySlotIndex, dwAvatorSerial, pszFileName, CMgrAccountLobbyHistorydel_char_request18_next);
        };
        void CMgrAccountLobbyHistoryenter_lobby20_wrapper(struct CMgrAccountLobbyHistory* _this, unsigned int dwAccountSerial, char* pAccountID, char byUserDgr, unsigned int dwIpAddress, bool bFirst, char* pszFileName)
        {
           CMgrAccountLobbyHistoryenter_lobby20_user(_this, dwAccountSerial, pAccountID, byUserDgr, dwIpAddress, bFirst, pszFileName, CMgrAccountLobbyHistoryenter_lobby20_next);
        };
        void CMgrAccountLobbyHistorylobby_disconnect22_wrapper(struct CMgrAccountLobbyHistory* _this, struct _qry_case_lobby_logout* pRegeData, char* pszFileName)
        {
           CMgrAccountLobbyHistorylobby_disconnect22_user(_this, pRegeData, pszFileName, CMgrAccountLobbyHistorylobby_disconnect22_next);
        };
        void CMgrAccountLobbyHistoryplayer_create24_wrapper(struct CMgrAccountLobbyHistory* _this, bool bFirstStart, struct _AVATOR_DATA* pAvator, char* pszFileName)
        {
           CMgrAccountLobbyHistoryplayer_create24_user(_this, bFirstStart, pAvator, pszFileName, CMgrAccountLobbyHistoryplayer_create24_next);
        };
        void CMgrAccountLobbyHistoryplayer_create_complete_money26_wrapper(struct CMgrAccountLobbyHistory* _this, struct _AVATOR_DATA* pAvator, char* pszFileName)
        {
           CMgrAccountLobbyHistoryplayer_create_complete_money26_user(_this, pAvator, pszFileName, CMgrAccountLobbyHistoryplayer_create_complete_money26_next);
        };
        void CMgrAccountLobbyHistoryplayer_money_fix28_wrapper(struct CMgrAccountLobbyHistory* _this, unsigned int dwOldDalant, unsigned int dwOldGold, struct _AVATOR_DATA* pAvator, char* pszFileName)
        {
           CMgrAccountLobbyHistoryplayer_money_fix28_user(_this, dwOldDalant, dwOldGold, pAvator, pszFileName, CMgrAccountLobbyHistoryplayer_money_fix28_next);
        };
        void CMgrAccountLobbyHistoryrecovery_char_complete30_wrapper(struct CMgrAccountLobbyHistory* _this, char byRetCode, struct _REGED* pAvator, char* pszFileName)
        {
           CMgrAccountLobbyHistoryrecovery_char_complete30_user(_this, byRetCode, pAvator, pszFileName, CMgrAccountLobbyHistoryrecovery_char_complete30_next);
        };
        void CMgrAccountLobbyHistoryreged_char_complete32_wrapper(struct CMgrAccountLobbyHistory* _this, char byRetCode, int nCharNum, struct _REGED* pRegedList, char* pszFileName)
        {
           CMgrAccountLobbyHistoryreged_char_complete32_user(_this, byRetCode, nCharNum, pRegedList, pszFileName, CMgrAccountLobbyHistoryreged_char_complete32_next);
        };
        void CMgrAccountLobbyHistoryreged_char_request34_wrapper(struct CMgrAccountLobbyHistory* _this, char* pszFileName)
        {
           CMgrAccountLobbyHistoryreged_char_request34_user(_this, pszFileName, CMgrAccountLobbyHistoryreged_char_request34_next);
        };
        void CMgrAccountLobbyHistorysel_char_complete36_wrapper(struct CMgrAccountLobbyHistory* _this, char byRetCode, struct _AVATOR_DATA* pAvator, unsigned int dwAddDalant, unsigned int dwAddGold, char* pszFileName)
        {
           CMgrAccountLobbyHistorysel_char_complete36_user(_this, byRetCode, pAvator, dwAddDalant, dwAddGold, pszFileName, CMgrAccountLobbyHistorysel_char_complete36_next);
        };
        void CMgrAccountLobbyHistorysel_char_request38_wrapper(struct CMgrAccountLobbyHistory* _this, char bySlotIndex, unsigned int dwAvatorSerial, char* pszFileName)
        {
           CMgrAccountLobbyHistorysel_char_request38_user(_this, bySlotIndex, dwAvatorSerial, pszFileName, CMgrAccountLobbyHistorysel_char_request38_next);
        };
        void CMgrAccountLobbyHistorytutorial_process_report_recv40_wrapper(struct CMgrAccountLobbyHistory* _this, char* pszFileName)
        {
           CMgrAccountLobbyHistorytutorial_process_report_recv40_user(_this, pszFileName, CMgrAccountLobbyHistorytutorial_process_report_recv40_next);
        };
        
        void CMgrAccountLobbyHistorydtor_CMgrAccountLobbyHistory42_wrapper(struct CMgrAccountLobbyHistory* _this)
        {
           CMgrAccountLobbyHistorydtor_CMgrAccountLobbyHistory42_user(_this, CMgrAccountLobbyHistorydtor_CMgrAccountLobbyHistory42_next);
        };
        
        ::std::array<hook_record, 21> CMgrAccountLobbyHistory_functions = 
        {
            _hook_record {
                (LPVOID)0x140232cc0L,
                (LPVOID *)&CMgrAccountLobbyHistoryctor_CMgrAccountLobbyHistory2_user,
                (LPVOID *)&CMgrAccountLobbyHistoryctor_CMgrAccountLobbyHistory2_next,
                (LPVOID)cast_pointer_function(CMgrAccountLobbyHistoryctor_CMgrAccountLobbyHistory2_wrapper),
                (LPVOID)cast_pointer_function((void(CMgrAccountLobbyHistory::*)())&CMgrAccountLobbyHistory::ctor_CMgrAccountLobbyHistory)
            },
            _hook_record {
                (LPVOID)0x140233460L,
                (LPVOID *)&CMgrAccountLobbyHistoryGetNewFileName4_user,
                (LPVOID *)&CMgrAccountLobbyHistoryGetNewFileName4_next,
                (LPVOID)cast_pointer_function(CMgrAccountLobbyHistoryGetNewFileName4_wrapper),
                (LPVOID)cast_pointer_function((void(CMgrAccountLobbyHistory::*)(unsigned int, char*))&CMgrAccountLobbyHistory::GetNewFileName)
            },
            _hook_record {
                (LPVOID)0x140233a00L,
                (LPVOID *)&CMgrAccountLobbyHistoryIOThread6_user,
                (LPVOID *)&CMgrAccountLobbyHistoryIOThread6_next,
                (LPVOID)cast_pointer_function(CMgrAccountLobbyHistoryIOThread6_wrapper),
                (LPVOID)cast_pointer_function((void(*)(void*))&CMgrAccountLobbyHistory::IOThread)
            },
            _hook_record {
                (LPVOID)0x140233700L,
                (LPVOID *)&CMgrAccountLobbyHistoryOnLoop8_user,
                (LPVOID *)&CMgrAccountLobbyHistoryOnLoop8_next,
                (LPVOID)cast_pointer_function(CMgrAccountLobbyHistoryOnLoop8_wrapper),
                (LPVOID)cast_pointer_function((void(CMgrAccountLobbyHistory::*)())&CMgrAccountLobbyHistory::OnLoop)
            },
            _hook_record {
                (LPVOID)0x140233790L,
                (LPVOID *)&CMgrAccountLobbyHistoryWriteFile10_user,
                (LPVOID *)&CMgrAccountLobbyHistoryWriteFile10_next,
                (LPVOID)cast_pointer_function(CMgrAccountLobbyHistoryWriteFile10_wrapper),
                (LPVOID)cast_pointer_function((void(CMgrAccountLobbyHistory::*)(char*, char*))&CMgrAccountLobbyHistory::WriteFile)
            },
            _hook_record {
                (LPVOID)0x1402340d0L,
                (LPVOID *)&CMgrAccountLobbyHistoryadd_char_complete12_user,
                (LPVOID *)&CMgrAccountLobbyHistoryadd_char_complete12_next,
                (LPVOID)cast_pointer_function(CMgrAccountLobbyHistoryadd_char_complete12_wrapper),
                (LPVOID)cast_pointer_function((void(CMgrAccountLobbyHistory::*)(char, struct _REGED_AVATOR_DB*, char*))&CMgrAccountLobbyHistory::add_char_complete)
            },
            _hook_record {
                (LPVOID)0x140234030L,
                (LPVOID *)&CMgrAccountLobbyHistoryadd_char_request14_user,
                (LPVOID *)&CMgrAccountLobbyHistoryadd_char_request14_next,
                (LPVOID)cast_pointer_function(CMgrAccountLobbyHistoryadd_char_request14_wrapper),
                (LPVOID)cast_pointer_function((void(CMgrAccountLobbyHistory::*)(char*))&CMgrAccountLobbyHistory::add_char_request)
            },
            _hook_record {
                (LPVOID)0x140234330L,
                (LPVOID *)&CMgrAccountLobbyHistorydel_char_complete16_user,
                (LPVOID *)&CMgrAccountLobbyHistorydel_char_complete16_next,
                (LPVOID)cast_pointer_function(CMgrAccountLobbyHistorydel_char_complete16_wrapper),
                (LPVOID)cast_pointer_function((void(CMgrAccountLobbyHistory::*)(char, char*))&CMgrAccountLobbyHistory::del_char_complete)
            },
            _hook_record {
                (LPVOID)0x140234270L,
                (LPVOID *)&CMgrAccountLobbyHistorydel_char_request18_user,
                (LPVOID *)&CMgrAccountLobbyHistorydel_char_request18_next,
                (LPVOID)cast_pointer_function(CMgrAccountLobbyHistorydel_char_request18_wrapper),
                (LPVOID)cast_pointer_function((void(CMgrAccountLobbyHistory::*)(char, unsigned int, char*))&CMgrAccountLobbyHistory::del_char_request)
            },
            _hook_record {
                (LPVOID)0x140233c00L,
                (LPVOID *)&CMgrAccountLobbyHistoryenter_lobby20_user,
                (LPVOID *)&CMgrAccountLobbyHistoryenter_lobby20_next,
                (LPVOID)cast_pointer_function(CMgrAccountLobbyHistoryenter_lobby20_wrapper),
                (LPVOID)cast_pointer_function((void(CMgrAccountLobbyHistory::*)(unsigned int, char*, char, unsigned int, bool, char*))&CMgrAccountLobbyHistory::enter_lobby)
            },
            _hook_record {
                (LPVOID)0x140234bb0L,
                (LPVOID *)&CMgrAccountLobbyHistorylobby_disconnect22_user,
                (LPVOID *)&CMgrAccountLobbyHistorylobby_disconnect22_next,
                (LPVOID)cast_pointer_function(CMgrAccountLobbyHistorylobby_disconnect22_wrapper),
                (LPVOID)cast_pointer_function((void(CMgrAccountLobbyHistory::*)(struct _qry_case_lobby_logout*, char*))&CMgrAccountLobbyHistory::lobby_disconnect)
            },
            _hook_record {
                (LPVOID)0x1402346b0L,
                (LPVOID *)&CMgrAccountLobbyHistoryplayer_create24_user,
                (LPVOID *)&CMgrAccountLobbyHistoryplayer_create24_next,
                (LPVOID)cast_pointer_function(CMgrAccountLobbyHistoryplayer_create24_wrapper),
                (LPVOID)cast_pointer_function((void(CMgrAccountLobbyHistory::*)(bool, struct _AVATOR_DATA*, char*))&CMgrAccountLobbyHistory::player_create)
            },
            _hook_record {
                (LPVOID)0x1402347f0L,
                (LPVOID *)&CMgrAccountLobbyHistoryplayer_create_complete_money26_user,
                (LPVOID *)&CMgrAccountLobbyHistoryplayer_create_complete_money26_next,
                (LPVOID)cast_pointer_function(CMgrAccountLobbyHistoryplayer_create_complete_money26_wrapper),
                (LPVOID)cast_pointer_function((void(CMgrAccountLobbyHistory::*)(struct _AVATOR_DATA*, char*))&CMgrAccountLobbyHistory::player_create_complete_money)
            },
            _hook_record {
                (LPVOID)0x1402348a0L,
                (LPVOID *)&CMgrAccountLobbyHistoryplayer_money_fix28_user,
                (LPVOID *)&CMgrAccountLobbyHistoryplayer_money_fix28_next,
                (LPVOID)cast_pointer_function(CMgrAccountLobbyHistoryplayer_money_fix28_wrapper),
                (LPVOID)cast_pointer_function((void(CMgrAccountLobbyHistory::*)(unsigned int, unsigned int, struct _AVATOR_DATA*, char*))&CMgrAccountLobbyHistory::player_money_fix)
            },
            _hook_record {
                (LPVOID)0x140234a30L,
                (LPVOID *)&CMgrAccountLobbyHistoryrecovery_char_complete30_user,
                (LPVOID *)&CMgrAccountLobbyHistoryrecovery_char_complete30_next,
                (LPVOID)cast_pointer_function(CMgrAccountLobbyHistoryrecovery_char_complete30_wrapper),
                (LPVOID)cast_pointer_function((void(CMgrAccountLobbyHistory::*)(char, struct _REGED*, char*))&CMgrAccountLobbyHistory::recovery_char_complete)
            },
            _hook_record {
                (LPVOID)0x140233dc0L,
                (LPVOID *)&CMgrAccountLobbyHistoryreged_char_complete32_user,
                (LPVOID *)&CMgrAccountLobbyHistoryreged_char_complete32_next,
                (LPVOID)cast_pointer_function(CMgrAccountLobbyHistoryreged_char_complete32_wrapper),
                (LPVOID)cast_pointer_function((void(CMgrAccountLobbyHistory::*)(char, int, struct _REGED*, char*))&CMgrAccountLobbyHistory::reged_char_complete)
            },
            _hook_record {
                (LPVOID)0x140233d20L,
                (LPVOID *)&CMgrAccountLobbyHistoryreged_char_request34_user,
                (LPVOID *)&CMgrAccountLobbyHistoryreged_char_request34_next,
                (LPVOID)cast_pointer_function(CMgrAccountLobbyHistoryreged_char_request34_wrapper),
                (LPVOID)cast_pointer_function((void(CMgrAccountLobbyHistory::*)(char*))&CMgrAccountLobbyHistory::reged_char_request)
            },
            _hook_record {
                (LPVOID)0x140234510L,
                (LPVOID *)&CMgrAccountLobbyHistorysel_char_complete36_user,
                (LPVOID *)&CMgrAccountLobbyHistorysel_char_complete36_next,
                (LPVOID)cast_pointer_function(CMgrAccountLobbyHistorysel_char_complete36_wrapper),
                (LPVOID)cast_pointer_function((void(CMgrAccountLobbyHistory::*)(char, struct _AVATOR_DATA*, unsigned int, unsigned int, char*))&CMgrAccountLobbyHistory::sel_char_complete)
            },
            _hook_record {
                (LPVOID)0x140234450L,
                (LPVOID *)&CMgrAccountLobbyHistorysel_char_request38_user,
                (LPVOID *)&CMgrAccountLobbyHistorysel_char_request38_next,
                (LPVOID)cast_pointer_function(CMgrAccountLobbyHistorysel_char_request38_wrapper),
                (LPVOID)cast_pointer_function((void(CMgrAccountLobbyHistory::*)(char, unsigned int, char*))&CMgrAccountLobbyHistory::sel_char_request)
            },
            _hook_record {
                (LPVOID)0x140234980L,
                (LPVOID *)&CMgrAccountLobbyHistorytutorial_process_report_recv40_user,
                (LPVOID *)&CMgrAccountLobbyHistorytutorial_process_report_recv40_next,
                (LPVOID)cast_pointer_function(CMgrAccountLobbyHistorytutorial_process_report_recv40_wrapper),
                (LPVOID)cast_pointer_function((void(CMgrAccountLobbyHistory::*)(char*))&CMgrAccountLobbyHistory::tutorial_process_report_recv)
            },
            _hook_record {
                (LPVOID)0x140233230L,
                (LPVOID *)&CMgrAccountLobbyHistorydtor_CMgrAccountLobbyHistory42_user,
                (LPVOID *)&CMgrAccountLobbyHistorydtor_CMgrAccountLobbyHistory42_next,
                (LPVOID)cast_pointer_function(CMgrAccountLobbyHistorydtor_CMgrAccountLobbyHistory42_wrapper),
                (LPVOID)cast_pointer_function((void(CMgrAccountLobbyHistory::*)())&CMgrAccountLobbyHistory::dtor_CMgrAccountLobbyHistory)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
