// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CMgrAccountLobbyHistory.hpp"


START_ATF_NAMESPACE
    namespace info
    {
        using CMgrAccountLobbyHistoryctor_CMgrAccountLobbyHistory2_ptr = void (WINAPIV*)(struct CMgrAccountLobbyHistory*);
        using CMgrAccountLobbyHistoryctor_CMgrAccountLobbyHistory2_clbk = void (WINAPIV*)(struct CMgrAccountLobbyHistory*, CMgrAccountLobbyHistoryctor_CMgrAccountLobbyHistory2_ptr);
        using CMgrAccountLobbyHistoryGetNewFileName4_ptr = void (WINAPIV*)(struct CMgrAccountLobbyHistory*, unsigned int, char*);
        using CMgrAccountLobbyHistoryGetNewFileName4_clbk = void (WINAPIV*)(struct CMgrAccountLobbyHistory*, unsigned int, char*, CMgrAccountLobbyHistoryGetNewFileName4_ptr);
        using CMgrAccountLobbyHistoryIOThread6_ptr = void (WINAPIV*)(void*);
        using CMgrAccountLobbyHistoryIOThread6_clbk = void (WINAPIV*)(void*, CMgrAccountLobbyHistoryIOThread6_ptr);
        using CMgrAccountLobbyHistoryOnLoop8_ptr = void (WINAPIV*)(struct CMgrAccountLobbyHistory*);
        using CMgrAccountLobbyHistoryOnLoop8_clbk = void (WINAPIV*)(struct CMgrAccountLobbyHistory*, CMgrAccountLobbyHistoryOnLoop8_ptr);
        using CMgrAccountLobbyHistoryWriteFile10_ptr = void (WINAPIV*)(struct CMgrAccountLobbyHistory*, char*, char*);
        using CMgrAccountLobbyHistoryWriteFile10_clbk = void (WINAPIV*)(struct CMgrAccountLobbyHistory*, char*, char*, CMgrAccountLobbyHistoryWriteFile10_ptr);
        using CMgrAccountLobbyHistoryadd_char_complete12_ptr = void (WINAPIV*)(struct CMgrAccountLobbyHistory*, char, struct _REGED_AVATOR_DB*, char*);
        using CMgrAccountLobbyHistoryadd_char_complete12_clbk = void (WINAPIV*)(struct CMgrAccountLobbyHistory*, char, struct _REGED_AVATOR_DB*, char*, CMgrAccountLobbyHistoryadd_char_complete12_ptr);
        using CMgrAccountLobbyHistoryadd_char_request14_ptr = void (WINAPIV*)(struct CMgrAccountLobbyHistory*, char*);
        using CMgrAccountLobbyHistoryadd_char_request14_clbk = void (WINAPIV*)(struct CMgrAccountLobbyHistory*, char*, CMgrAccountLobbyHistoryadd_char_request14_ptr);
        using CMgrAccountLobbyHistorydel_char_complete16_ptr = void (WINAPIV*)(struct CMgrAccountLobbyHistory*, char, char*);
        using CMgrAccountLobbyHistorydel_char_complete16_clbk = void (WINAPIV*)(struct CMgrAccountLobbyHistory*, char, char*, CMgrAccountLobbyHistorydel_char_complete16_ptr);
        using CMgrAccountLobbyHistorydel_char_request18_ptr = void (WINAPIV*)(struct CMgrAccountLobbyHistory*, char, unsigned int, char*);
        using CMgrAccountLobbyHistorydel_char_request18_clbk = void (WINAPIV*)(struct CMgrAccountLobbyHistory*, char, unsigned int, char*, CMgrAccountLobbyHistorydel_char_request18_ptr);
        using CMgrAccountLobbyHistoryenter_lobby20_ptr = void (WINAPIV*)(struct CMgrAccountLobbyHistory*, unsigned int, char*, char, unsigned int, bool, char*);
        using CMgrAccountLobbyHistoryenter_lobby20_clbk = void (WINAPIV*)(struct CMgrAccountLobbyHistory*, unsigned int, char*, char, unsigned int, bool, char*, CMgrAccountLobbyHistoryenter_lobby20_ptr);
        using CMgrAccountLobbyHistorylobby_disconnect22_ptr = void (WINAPIV*)(struct CMgrAccountLobbyHistory*, struct _qry_case_lobby_logout*, char*);
        using CMgrAccountLobbyHistorylobby_disconnect22_clbk = void (WINAPIV*)(struct CMgrAccountLobbyHistory*, struct _qry_case_lobby_logout*, char*, CMgrAccountLobbyHistorylobby_disconnect22_ptr);
        using CMgrAccountLobbyHistoryplayer_create24_ptr = void (WINAPIV*)(struct CMgrAccountLobbyHistory*, bool, struct _AVATOR_DATA*, char*);
        using CMgrAccountLobbyHistoryplayer_create24_clbk = void (WINAPIV*)(struct CMgrAccountLobbyHistory*, bool, struct _AVATOR_DATA*, char*, CMgrAccountLobbyHistoryplayer_create24_ptr);
        using CMgrAccountLobbyHistoryplayer_create_complete_money26_ptr = void (WINAPIV*)(struct CMgrAccountLobbyHistory*, struct _AVATOR_DATA*, char*);
        using CMgrAccountLobbyHistoryplayer_create_complete_money26_clbk = void (WINAPIV*)(struct CMgrAccountLobbyHistory*, struct _AVATOR_DATA*, char*, CMgrAccountLobbyHistoryplayer_create_complete_money26_ptr);
        using CMgrAccountLobbyHistoryplayer_money_fix28_ptr = void (WINAPIV*)(struct CMgrAccountLobbyHistory*, unsigned int, unsigned int, struct _AVATOR_DATA*, char*);
        using CMgrAccountLobbyHistoryplayer_money_fix28_clbk = void (WINAPIV*)(struct CMgrAccountLobbyHistory*, unsigned int, unsigned int, struct _AVATOR_DATA*, char*, CMgrAccountLobbyHistoryplayer_money_fix28_ptr);
        using CMgrAccountLobbyHistoryrecovery_char_complete30_ptr = void (WINAPIV*)(struct CMgrAccountLobbyHistory*, char, struct _REGED*, char*);
        using CMgrAccountLobbyHistoryrecovery_char_complete30_clbk = void (WINAPIV*)(struct CMgrAccountLobbyHistory*, char, struct _REGED*, char*, CMgrAccountLobbyHistoryrecovery_char_complete30_ptr);
        using CMgrAccountLobbyHistoryreged_char_complete32_ptr = void (WINAPIV*)(struct CMgrAccountLobbyHistory*, char, int, struct _REGED*, char*);
        using CMgrAccountLobbyHistoryreged_char_complete32_clbk = void (WINAPIV*)(struct CMgrAccountLobbyHistory*, char, int, struct _REGED*, char*, CMgrAccountLobbyHistoryreged_char_complete32_ptr);
        using CMgrAccountLobbyHistoryreged_char_request34_ptr = void (WINAPIV*)(struct CMgrAccountLobbyHistory*, char*);
        using CMgrAccountLobbyHistoryreged_char_request34_clbk = void (WINAPIV*)(struct CMgrAccountLobbyHistory*, char*, CMgrAccountLobbyHistoryreged_char_request34_ptr);
        using CMgrAccountLobbyHistorysel_char_complete36_ptr = void (WINAPIV*)(struct CMgrAccountLobbyHistory*, char, struct _AVATOR_DATA*, unsigned int, unsigned int, char*);
        using CMgrAccountLobbyHistorysel_char_complete36_clbk = void (WINAPIV*)(struct CMgrAccountLobbyHistory*, char, struct _AVATOR_DATA*, unsigned int, unsigned int, char*, CMgrAccountLobbyHistorysel_char_complete36_ptr);
        using CMgrAccountLobbyHistorysel_char_request38_ptr = void (WINAPIV*)(struct CMgrAccountLobbyHistory*, char, unsigned int, char*);
        using CMgrAccountLobbyHistorysel_char_request38_clbk = void (WINAPIV*)(struct CMgrAccountLobbyHistory*, char, unsigned int, char*, CMgrAccountLobbyHistorysel_char_request38_ptr);
        using CMgrAccountLobbyHistorytutorial_process_report_recv40_ptr = void (WINAPIV*)(struct CMgrAccountLobbyHistory*, char*);
        using CMgrAccountLobbyHistorytutorial_process_report_recv40_clbk = void (WINAPIV*)(struct CMgrAccountLobbyHistory*, char*, CMgrAccountLobbyHistorytutorial_process_report_recv40_ptr);
        using CMgrAccountLobbyHistorydtor_CMgrAccountLobbyHistory42_ptr = void (WINAPIV*)(struct CMgrAccountLobbyHistory*);
        using CMgrAccountLobbyHistorydtor_CMgrAccountLobbyHistory42_clbk = void (WINAPIV*)(struct CMgrAccountLobbyHistory*, CMgrAccountLobbyHistorydtor_CMgrAccountLobbyHistory42_ptr);
        
    }; // end namespace info
END_ATF_NAMESPACE