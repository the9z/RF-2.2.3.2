#include <CashItemRemoteStoreDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CashItemRemoteStoreBuy2_ptr CashItemRemoteStoreBuy2_next(nullptr);
        Info::CashItemRemoteStoreBuy2_clbk CashItemRemoteStoreBuy2_user(nullptr);
        
        Info::CashItemRemoteStoreBuyByCash4_ptr CashItemRemoteStoreBuyByCash4_next(nullptr);
        Info::CashItemRemoteStoreBuyByCash4_clbk CashItemRemoteStoreBuyByCash4_user(nullptr);
        
        Info::CashItemRemoteStoreBuyByGold6_ptr CashItemRemoteStoreBuyByGold6_next(nullptr);
        Info::CashItemRemoteStoreBuyByGold6_clbk CashItemRemoteStoreBuyByGold6_user(nullptr);
        
        Info::CashItemRemoteStoreBuyLimSale8_ptr CashItemRemoteStoreBuyLimSale8_next(nullptr);
        Info::CashItemRemoteStoreBuyLimSale8_clbk CashItemRemoteStoreBuyLimSale8_user(nullptr);
        
        
        Info::CashItemRemoteStorector_CashItemRemoteStore10_ptr CashItemRemoteStorector_CashItemRemoteStore10_next(nullptr);
        Info::CashItemRemoteStorector_CashItemRemoteStore10_clbk CashItemRemoteStorector_CashItemRemoteStore10_user(nullptr);
        
        Info::CashItemRemoteStoreChangeDiscountEventTime12_ptr CashItemRemoteStoreChangeDiscountEventTime12_next(nullptr);
        Info::CashItemRemoteStoreChangeDiscountEventTime12_clbk CashItemRemoteStoreChangeDiscountEventTime12_user(nullptr);
        
        Info::CashItemRemoteStoreChangeEventTime14_ptr CashItemRemoteStoreChangeEventTime14_next(nullptr);
        Info::CashItemRemoteStoreChangeEventTime14_clbk CashItemRemoteStoreChangeEventTime14_user(nullptr);
        
        Info::CashItemRemoteStoreChange_Conditional_Event_Status16_ptr CashItemRemoteStoreChange_Conditional_Event_Status16_next(nullptr);
        Info::CashItemRemoteStoreChange_Conditional_Event_Status16_clbk CashItemRemoteStoreChange_Conditional_Event_Status16_user(nullptr);
        
        Info::CashItemRemoteStoreCheatBuy18_ptr CashItemRemoteStoreCheatBuy18_next(nullptr);
        Info::CashItemRemoteStoreCheatBuy18_clbk CashItemRemoteStoreCheatBuy18_user(nullptr);
        
        Info::CashItemRemoteStoreCheatLoadCashAmount20_ptr CashItemRemoteStoreCheatLoadCashAmount20_next(nullptr);
        Info::CashItemRemoteStoreCheatLoadCashAmount20_clbk CashItemRemoteStoreCheatLoadCashAmount20_user(nullptr);
        
        Info::CashItemRemoteStoreCheckCouponType22_ptr CashItemRemoteStoreCheckCouponType22_next(nullptr);
        Info::CashItemRemoteStoreCheckCouponType22_clbk CashItemRemoteStoreCheckCouponType22_user(nullptr);
        
        Info::CashItemRemoteStoreCheck_CashEvent_INI24_ptr CashItemRemoteStoreCheck_CashEvent_INI24_next(nullptr);
        Info::CashItemRemoteStoreCheck_CashEvent_INI24_clbk CashItemRemoteStoreCheck_CashEvent_INI24_user(nullptr);
        
        Info::CashItemRemoteStoreCheck_CashEvent_Status26_ptr CashItemRemoteStoreCheck_CashEvent_Status26_next(nullptr);
        Info::CashItemRemoteStoreCheck_CashEvent_Status26_clbk CashItemRemoteStoreCheck_CashEvent_Status26_user(nullptr);
        
        Info::CashItemRemoteStoreCheck_Conditional_Event_INI28_ptr CashItemRemoteStoreCheck_Conditional_Event_INI28_next(nullptr);
        Info::CashItemRemoteStoreCheck_Conditional_Event_INI28_clbk CashItemRemoteStoreCheck_Conditional_Event_INI28_user(nullptr);
        
        Info::CashItemRemoteStoreCheck_Conditional_Event_Status30_ptr CashItemRemoteStoreCheck_Conditional_Event_Status30_next(nullptr);
        Info::CashItemRemoteStoreCheck_Conditional_Event_Status30_clbk CashItemRemoteStoreCheck_Conditional_Event_Status30_user(nullptr);
        
        Info::CashItemRemoteStoreCheck_Grosssales32_ptr CashItemRemoteStoreCheck_Grosssales32_next(nullptr);
        Info::CashItemRemoteStoreCheck_Grosssales32_clbk CashItemRemoteStoreCheck_Grosssales32_user(nullptr);
        
        Info::CashItemRemoteStoreCheck_Loaded_Event_Status34_ptr CashItemRemoteStoreCheck_Loaded_Event_Status34_next(nullptr);
        Info::CashItemRemoteStoreCheck_Loaded_Event_Status34_clbk CashItemRemoteStoreCheck_Loaded_Event_Status34_user(nullptr);
        
        Info::CashItemRemoteStoreCheck_Total_Selling36_ptr CashItemRemoteStoreCheck_Total_Selling36_next(nullptr);
        Info::CashItemRemoteStoreCheck_Total_Selling36_clbk CashItemRemoteStoreCheck_Total_Selling36_user(nullptr);
        
        Info::CashItemRemoteStoreFindCashRec38_ptr CashItemRemoteStoreFindCashRec38_next(nullptr);
        Info::CashItemRemoteStoreFindCashRec38_clbk CashItemRemoteStoreFindCashRec38_user(nullptr);
        
        Info::CashItemRemoteStoreGetEvnetTime40_ptr CashItemRemoteStoreGetEvnetTime40_next(nullptr);
        Info::CashItemRemoteStoreGetEvnetTime40_clbk CashItemRemoteStoreGetEvnetTime40_user(nullptr);
        
        Info::CashItemRemoteStoreGetLimDiscout42_ptr CashItemRemoteStoreGetLimDiscout42_next(nullptr);
        Info::CashItemRemoteStoreGetLimDiscout42_clbk CashItemRemoteStoreGetLimDiscout42_user(nullptr);
        
        Info::CashItemRemoteStoreGetRemainNumOfGood44_ptr CashItemRemoteStoreGetRemainNumOfGood44_next(nullptr);
        Info::CashItemRemoteStoreGetRemainNumOfGood44_clbk CashItemRemoteStoreGetRemainNumOfGood44_user(nullptr);
        
        Info::CashItemRemoteStoreGetRemainNumOfGood46_ptr CashItemRemoteStoreGetRemainNumOfGood46_next(nullptr);
        Info::CashItemRemoteStoreGetRemainNumOfGood46_clbk CashItemRemoteStoreGetRemainNumOfGood46_user(nullptr);
        
        Info::CashItemRemoteStoreGetSetDiscout48_ptr CashItemRemoteStoreGetSetDiscout48_next(nullptr);
        Info::CashItemRemoteStoreGetSetDiscout48_clbk CashItemRemoteStoreGetSetDiscout48_user(nullptr);
        
        Info::CashItemRemoteStoreGet_CashEvent_Status50_ptr CashItemRemoteStoreGet_CashEvent_Status50_next(nullptr);
        Info::CashItemRemoteStoreGet_CashEvent_Status50_clbk CashItemRemoteStoreGet_CashEvent_Status50_user(nullptr);
        
        Info::CashItemRemoteStoreGet_Conditional_Event_Name52_ptr CashItemRemoteStoreGet_Conditional_Event_Name52_next(nullptr);
        Info::CashItemRemoteStoreGet_Conditional_Event_Name52_clbk CashItemRemoteStoreGet_Conditional_Event_Name52_user(nullptr);
        
        Info::CashItemRemoteStoreGet_Conditional_Event_Status54_ptr CashItemRemoteStoreGet_Conditional_Event_Status54_next(nullptr);
        Info::CashItemRemoteStoreGet_Conditional_Event_Status54_clbk CashItemRemoteStoreGet_Conditional_Event_Status54_user(nullptr);
        
        Info::CashItemRemoteStoreGoodsList56_ptr CashItemRemoteStoreGoodsList56_next(nullptr);
        Info::CashItemRemoteStoreGoodsList56_clbk CashItemRemoteStoreGoodsList56_user(nullptr);
        
        Info::CashItemRemoteStoreGoodsListBuyByCash58_ptr CashItemRemoteStoreGoodsListBuyByCash58_next(nullptr);
        Info::CashItemRemoteStoreGoodsListBuyByCash58_clbk CashItemRemoteStoreGoodsListBuyByCash58_user(nullptr);
        
        Info::CashItemRemoteStoreGoodsListBuyByGold60_ptr CashItemRemoteStoreGoodsListBuyByGold60_next(nullptr);
        Info::CashItemRemoteStoreGoodsListBuyByGold60_clbk CashItemRemoteStoreGoodsListBuyByGold60_user(nullptr);
        
        Info::CashItemRemoteStoreInform_CashEvent62_ptr CashItemRemoteStoreInform_CashEvent62_next(nullptr);
        Info::CashItemRemoteStoreInform_CashEvent62_clbk CashItemRemoteStoreInform_CashEvent62_user(nullptr);
        
        Info::CashItemRemoteStoreInform_CashEvent_Status_All64_ptr CashItemRemoteStoreInform_CashEvent_Status_All64_next(nullptr);
        Info::CashItemRemoteStoreInform_CashEvent_Status_All64_clbk CashItemRemoteStoreInform_CashEvent_Status_All64_user(nullptr);
        
        Info::CashItemRemoteStoreInform_ConditionalEvent66_ptr CashItemRemoteStoreInform_ConditionalEvent66_next(nullptr);
        Info::CashItemRemoteStoreInform_ConditionalEvent66_clbk CashItemRemoteStoreInform_ConditionalEvent66_user(nullptr);
        
        Info::CashItemRemoteStoreInform_ConditionalEvent_Status_All68_ptr CashItemRemoteStoreInform_ConditionalEvent_Status_All68_next(nullptr);
        Info::CashItemRemoteStoreInform_ConditionalEvent_Status_All68_clbk CashItemRemoteStoreInform_ConditionalEvent_Status_All68_user(nullptr);
        
        Info::CashItemRemoteStoreInitialize70_ptr CashItemRemoteStoreInitialize70_next(nullptr);
        Info::CashItemRemoteStoreInitialize70_clbk CashItemRemoteStoreInitialize70_user(nullptr);
        
        Info::CashItemRemoteStoreInstance72_ptr CashItemRemoteStoreInstance72_next(nullptr);
        Info::CashItemRemoteStoreInstance72_clbk CashItemRemoteStoreInstance72_user(nullptr);
        
        Info::CashItemRemoteStoreIsBuyCashItemByGold74_ptr CashItemRemoteStoreIsBuyCashItemByGold74_next(nullptr);
        Info::CashItemRemoteStoreIsBuyCashItemByGold74_clbk CashItemRemoteStoreIsBuyCashItemByGold74_user(nullptr);
        
        Info::CashItemRemoteStoreIsEventTime76_ptr CashItemRemoteStoreIsEventTime76_next(nullptr);
        Info::CashItemRemoteStoreIsEventTime76_clbk CashItemRemoteStoreIsEventTime76_user(nullptr);
        
        Info::CashItemRemoteStoreIsUsableCoupon78_ptr CashItemRemoteStoreIsUsableCoupon78_next(nullptr);
        Info::CashItemRemoteStoreIsUsableCoupon78_clbk CashItemRemoteStoreIsUsableCoupon78_user(nullptr);
        
        Info::CashItemRemoteStoreLimitedSale_check_count80_ptr CashItemRemoteStoreLimitedSale_check_count80_next(nullptr);
        Info::CashItemRemoteStoreLimitedSale_check_count80_clbk CashItemRemoteStoreLimitedSale_check_count80_user(nullptr);
        
        Info::CashItemRemoteStoreLoadBuyCashMode82_ptr CashItemRemoteStoreLoadBuyCashMode82_next(nullptr);
        Info::CashItemRemoteStoreLoadBuyCashMode82_clbk CashItemRemoteStoreLoadBuyCashMode82_user(nullptr);
        
        Info::CashItemRemoteStoreLoadNationalPrice84_ptr CashItemRemoteStoreLoadNationalPrice84_next(nullptr);
        Info::CashItemRemoteStoreLoadNationalPrice84_clbk CashItemRemoteStoreLoadNationalPrice84_user(nullptr);
        
        Info::CashItemRemoteStoreLoad_Cash_Event86_ptr CashItemRemoteStoreLoad_Cash_Event86_next(nullptr);
        Info::CashItemRemoteStoreLoad_Cash_Event86_clbk CashItemRemoteStoreLoad_Cash_Event86_user(nullptr);
        
        Info::CashItemRemoteStoreLoad_Conditional_Event88_ptr CashItemRemoteStoreLoad_Conditional_Event88_next(nullptr);
        Info::CashItemRemoteStoreLoad_Conditional_Event88_clbk CashItemRemoteStoreLoad_Conditional_Event88_user(nullptr);
        
        Info::CashItemRemoteStoreLoad_Event_INI90_ptr CashItemRemoteStoreLoad_Event_INI90_next(nullptr);
        Info::CashItemRemoteStoreLoad_Event_INI90_clbk CashItemRemoteStoreLoad_Event_INI90_user(nullptr);
        
        Info::CashItemRemoteStoreLoad_LimitedSale_Event_INI92_ptr CashItemRemoteStoreLoad_LimitedSale_Event_INI92_next(nullptr);
        Info::CashItemRemoteStoreLoad_LimitedSale_Event_INI92_clbk CashItemRemoteStoreLoad_LimitedSale_Event_INI92_user(nullptr);
        
        Info::CashItemRemoteStoreLoop_Cash_Event94_ptr CashItemRemoteStoreLoop_Cash_Event94_next(nullptr);
        Info::CashItemRemoteStoreLoop_Cash_Event94_clbk CashItemRemoteStoreLoop_Cash_Event94_user(nullptr);
        
        Info::CashItemRemoteStoreLoop_Check_Total_Selling96_ptr CashItemRemoteStoreLoop_Check_Total_Selling96_next(nullptr);
        Info::CashItemRemoteStoreLoop_Check_Total_Selling96_clbk CashItemRemoteStoreLoop_Check_Total_Selling96_user(nullptr);
        
        Info::CashItemRemoteStoreLoop_ContEvent98_ptr CashItemRemoteStoreLoop_ContEvent98_next(nullptr);
        Info::CashItemRemoteStoreLoop_ContEvent98_clbk CashItemRemoteStoreLoop_ContEvent98_user(nullptr);
        
        Info::CashItemRemoteStoreLoop_TatalCashEvent100_ptr CashItemRemoteStoreLoop_TatalCashEvent100_next(nullptr);
        Info::CashItemRemoteStoreLoop_TatalCashEvent100_clbk CashItemRemoteStoreLoop_TatalCashEvent100_user(nullptr);
        
        Info::CashItemRemoteStoreSell102_ptr CashItemRemoteStoreSell102_next(nullptr);
        Info::CashItemRemoteStoreSell102_clbk CashItemRemoteStoreSell102_user(nullptr);
        
        Info::CashItemRemoteStoreSetNextDiscountEventTime104_ptr CashItemRemoteStoreSetNextDiscountEventTime104_next(nullptr);
        Info::CashItemRemoteStoreSetNextDiscountEventTime104_clbk CashItemRemoteStoreSetNextDiscountEventTime104_user(nullptr);
        
        Info::CashItemRemoteStoreSetNextEventTime106_ptr CashItemRemoteStoreSetNextEventTime106_next(nullptr);
        Info::CashItemRemoteStoreSetNextEventTime106_clbk CashItemRemoteStoreSetNextEventTime106_user(nullptr);
        
        Info::CashItemRemoteStoreSet_CashEvent_Status108_ptr CashItemRemoteStoreSet_CashEvent_Status108_next(nullptr);
        Info::CashItemRemoteStoreSet_CashEvent_Status108_clbk CashItemRemoteStoreSet_CashEvent_Status108_user(nullptr);
        
        Info::CashItemRemoteStoreSet_Conditional_Evnet_Status110_ptr CashItemRemoteStoreSet_Conditional_Evnet_Status110_next(nullptr);
        Info::CashItemRemoteStoreSet_Conditional_Evnet_Status110_clbk CashItemRemoteStoreSet_Conditional_Evnet_Status110_user(nullptr);
        
        Info::CashItemRemoteStoreSet_DB_LimitedSale_Event112_ptr CashItemRemoteStoreSet_DB_LimitedSale_Event112_next(nullptr);
        Info::CashItemRemoteStoreSet_DB_LimitedSale_Event112_clbk CashItemRemoteStoreSet_DB_LimitedSale_Event112_user(nullptr);
        
        Info::CashItemRemoteStoreSet_FROMDB_LimitedSale_Event114_ptr CashItemRemoteStoreSet_FROMDB_LimitedSale_Event114_next(nullptr);
        Info::CashItemRemoteStoreSet_FROMDB_LimitedSale_Event114_clbk CashItemRemoteStoreSet_FROMDB_LimitedSale_Event114_user(nullptr);
        
        Info::CashItemRemoteStoreSet_LimitedSale_DCK116_ptr CashItemRemoteStoreSet_LimitedSale_DCK116_next(nullptr);
        Info::CashItemRemoteStoreSet_LimitedSale_DCK116_clbk CashItemRemoteStoreSet_LimitedSale_DCK116_user(nullptr);
        
        Info::CashItemRemoteStoreSet_LimitedSale_Event118_ptr CashItemRemoteStoreSet_LimitedSale_Event118_next(nullptr);
        Info::CashItemRemoteStoreSet_LimitedSale_Event118_clbk CashItemRemoteStoreSet_LimitedSale_Event118_user(nullptr);
        
        Info::CashItemRemoteStoreSet_LimitedSale_Event_Ini120_ptr CashItemRemoteStoreSet_LimitedSale_Event_Ini120_next(nullptr);
        Info::CashItemRemoteStoreSet_LimitedSale_Event_Ini120_clbk CashItemRemoteStoreSet_LimitedSale_Event_Ini120_user(nullptr);
        
        Info::CashItemRemoteStoreSet_LimitedSale_count122_ptr CashItemRemoteStoreSet_LimitedSale_count122_next(nullptr);
        Info::CashItemRemoteStoreSet_LimitedSale_count122_clbk CashItemRemoteStoreSet_LimitedSale_count122_user(nullptr);
        
        Info::CashItemRemoteStoreUpdate_INI124_ptr CashItemRemoteStoreUpdate_INI124_next(nullptr);
        Info::CashItemRemoteStoreUpdate_INI124_clbk CashItemRemoteStoreUpdate_INI124_user(nullptr);
        
        Info::CashItemRemoteStoreUseDiscountCoupon126_ptr CashItemRemoteStoreUseDiscountCoupon126_next(nullptr);
        Info::CashItemRemoteStoreUseDiscountCoupon126_clbk CashItemRemoteStoreUseDiscountCoupon126_user(nullptr);
        
        Info::CashItemRemoteStore_InitLoggers128_ptr CashItemRemoteStore_InitLoggers128_next(nullptr);
        Info::CashItemRemoteStore_InitLoggers128_clbk CashItemRemoteStore_InitLoggers128_user(nullptr);
        
        Info::CashItemRemoteStore_MakeLinkTable130_ptr CashItemRemoteStore_MakeLinkTable130_next(nullptr);
        Info::CashItemRemoteStore_MakeLinkTable130_clbk CashItemRemoteStore_MakeLinkTable130_user(nullptr);
        
        Info::CashItemRemoteStore_ReadGoods132_ptr CashItemRemoteStore_ReadGoods132_next(nullptr);
        Info::CashItemRemoteStore_ReadGoods132_clbk CashItemRemoteStore_ReadGoods132_user(nullptr);
        
        Info::CashItemRemoteStore__CheckGoods134_ptr CashItemRemoteStore__CheckGoods134_next(nullptr);
        Info::CashItemRemoteStore__CheckGoods134_clbk CashItemRemoteStore__CheckGoods134_user(nullptr);
        
        Info::CashItemRemoteStore_buybygold_buy_single_item136_ptr CashItemRemoteStore_buybygold_buy_single_item136_next(nullptr);
        Info::CashItemRemoteStore_buybygold_buy_single_item136_clbk CashItemRemoteStore_buybygold_buy_single_item136_user(nullptr);
        
        Info::CashItemRemoteStore_buybygold_buy_single_item_additional_process138_ptr CashItemRemoteStore_buybygold_buy_single_item_additional_process138_next(nullptr);
        Info::CashItemRemoteStore_buybygold_buy_single_item_additional_process138_clbk CashItemRemoteStore_buybygold_buy_single_item_additional_process138_user(nullptr);
        
        Info::CashItemRemoteStore_buybygold_buy_single_item_calc_price140_ptr CashItemRemoteStore_buybygold_buy_single_item_calc_price140_next(nullptr);
        Info::CashItemRemoteStore_buybygold_buy_single_item_calc_price140_clbk CashItemRemoteStore_buybygold_buy_single_item_calc_price140_user(nullptr);
        
        Info::CashItemRemoteStore_buybygold_buy_single_item_calc_price_coupon142_ptr CashItemRemoteStore_buybygold_buy_single_item_calc_price_coupon142_next(nullptr);
        Info::CashItemRemoteStore_buybygold_buy_single_item_calc_price_coupon142_clbk CashItemRemoteStore_buybygold_buy_single_item_calc_price_coupon142_user(nullptr);
        
        Info::CashItemRemoteStore_buybygold_buy_single_item_calc_price_discount144_ptr CashItemRemoteStore_buybygold_buy_single_item_calc_price_discount144_next(nullptr);
        Info::CashItemRemoteStore_buybygold_buy_single_item_calc_price_discount144_clbk CashItemRemoteStore_buybygold_buy_single_item_calc_price_discount144_user(nullptr);
        
        Info::CashItemRemoteStore_buybygold_buy_single_item_calc_price_limitsale146_ptr CashItemRemoteStore_buybygold_buy_single_item_calc_price_limitsale146_next(nullptr);
        Info::CashItemRemoteStore_buybygold_buy_single_item_calc_price_limitsale146_clbk CashItemRemoteStore_buybygold_buy_single_item_calc_price_limitsale146_user(nullptr);
        
        Info::CashItemRemoteStore_buybygold_buy_single_item_calc_price_one_n_one148_ptr CashItemRemoteStore_buybygold_buy_single_item_calc_price_one_n_one148_next(nullptr);
        Info::CashItemRemoteStore_buybygold_buy_single_item_calc_price_one_n_one148_clbk CashItemRemoteStore_buybygold_buy_single_item_calc_price_one_n_one148_user(nullptr);
        
        Info::CashItemRemoteStore_buybygold_buy_single_item_check_item150_ptr CashItemRemoteStore_buybygold_buy_single_item_check_item150_next(nullptr);
        Info::CashItemRemoteStore_buybygold_buy_single_item_check_item150_clbk CashItemRemoteStore_buybygold_buy_single_item_check_item150_user(nullptr);
        
        Info::CashItemRemoteStore_buybygold_buy_single_item_give_item152_ptr CashItemRemoteStore_buybygold_buy_single_item_give_item152_next(nullptr);
        Info::CashItemRemoteStore_buybygold_buy_single_item_give_item152_clbk CashItemRemoteStore_buybygold_buy_single_item_give_item152_user(nullptr);
        
        Info::CashItemRemoteStore_buybygold_buy_single_item_proc_complete154_ptr CashItemRemoteStore_buybygold_buy_single_item_proc_complete154_next(nullptr);
        Info::CashItemRemoteStore_buybygold_buy_single_item_proc_complete154_clbk CashItemRemoteStore_buybygold_buy_single_item_proc_complete154_user(nullptr);
        
        Info::CashItemRemoteStore_buybygold_buy_single_item_proc_price156_ptr CashItemRemoteStore_buybygold_buy_single_item_proc_price156_next(nullptr);
        Info::CashItemRemoteStore_buybygold_buy_single_item_proc_price156_clbk CashItemRemoteStore_buybygold_buy_single_item_proc_price156_user(nullptr);
        
        Info::CashItemRemoteStore_buybygold_buy_single_item_setbuydblog158_ptr CashItemRemoteStore_buybygold_buy_single_item_setbuydblog158_next(nullptr);
        Info::CashItemRemoteStore_buybygold_buy_single_item_setbuydblog158_clbk CashItemRemoteStore_buybygold_buy_single_item_setbuydblog158_user(nullptr);
        
        Info::CashItemRemoteStore_buybygold_buy_single_item_setsenddata160_ptr CashItemRemoteStore_buybygold_buy_single_item_setsenddata160_next(nullptr);
        Info::CashItemRemoteStore_buybygold_buy_single_item_setsenddata160_clbk CashItemRemoteStore_buybygold_buy_single_item_setsenddata160_user(nullptr);
        
        Info::CashItemRemoteStore_buybygold_check_coupon162_ptr CashItemRemoteStore_buybygold_check_coupon162_next(nullptr);
        Info::CashItemRemoteStore_buybygold_check_coupon162_clbk CashItemRemoteStore_buybygold_check_coupon162_user(nullptr);
        
        Info::CashItemRemoteStore_buybygold_check_valid164_ptr CashItemRemoteStore_buybygold_check_valid164_next(nullptr);
        Info::CashItemRemoteStore_buybygold_check_valid164_clbk CashItemRemoteStore_buybygold_check_valid164_user(nullptr);
        
        Info::CashItemRemoteStore_buybygold_complete166_ptr CashItemRemoteStore_buybygold_complete166_next(nullptr);
        Info::CashItemRemoteStore_buybygold_complete166_clbk CashItemRemoteStore_buybygold_complete166_user(nullptr);
        
        Info::CashItemRemoteStore_buybygold_set_cashitem_dblog_sheet168_ptr CashItemRemoteStore_buybygold_set_cashitem_dblog_sheet168_next(nullptr);
        Info::CashItemRemoteStore_buybygold_set_cashitem_dblog_sheet168_clbk CashItemRemoteStore_buybygold_set_cashitem_dblog_sheet168_user(nullptr);
        
        Info::CashItemRemoteStore_check_buyitem170_ptr CashItemRemoteStore_check_buyitem170_next(nullptr);
        Info::CashItemRemoteStore_check_buyitem170_clbk CashItemRemoteStore_check_buyitem170_user(nullptr);
        
        Info::CashItemRemoteStorecheck_cash_discount_ini172_ptr CashItemRemoteStorecheck_cash_discount_ini172_next(nullptr);
        Info::CashItemRemoteStorecheck_cash_discount_ini172_clbk CashItemRemoteStorecheck_cash_discount_ini172_user(nullptr);
        
        Info::CashItemRemoteStorecheck_cash_discount_status174_ptr CashItemRemoteStorecheck_cash_discount_status174_next(nullptr);
        Info::CashItemRemoteStorecheck_cash_discount_status174_clbk CashItemRemoteStorecheck_cash_discount_status174_user(nullptr);
        
        Info::CashItemRemoteStorecheck_loaded_cde_status176_ptr CashItemRemoteStorecheck_loaded_cde_status176_next(nullptr);
        Info::CashItemRemoteStorecheck_loaded_cde_status176_clbk CashItemRemoteStorecheck_loaded_cde_status176_user(nullptr);
        
        Info::CashItemRemoteStoreforce_endup_cash_discount_event178_ptr CashItemRemoteStoreforce_endup_cash_discount_event178_next(nullptr);
        Info::CashItemRemoteStoreforce_endup_cash_discount_event178_clbk CashItemRemoteStoreforce_endup_cash_discount_event178_user(nullptr);
        
        Info::CashItemRemoteStoreget_cde_status180_ptr CashItemRemoteStoreget_cde_status180_next(nullptr);
        Info::CashItemRemoteStoreget_cde_status180_clbk CashItemRemoteStoreget_cde_status180_user(nullptr);
        
        Info::CashItemRemoteStoreinform_cashdiscount_event182_ptr CashItemRemoteStoreinform_cashdiscount_event182_next(nullptr);
        Info::CashItemRemoteStoreinform_cashdiscount_event182_clbk CashItemRemoteStoreinform_cashdiscount_event182_user(nullptr);
        
        Info::CashItemRemoteStoreinform_cashdiscount_status_all184_ptr CashItemRemoteStoreinform_cashdiscount_status_all184_next(nullptr);
        Info::CashItemRemoteStoreinform_cashdiscount_status_all184_clbk CashItemRemoteStoreinform_cashdiscount_status_all184_user(nullptr);
        
        Info::CashItemRemoteStoreisConEventTime186_ptr CashItemRemoteStoreisConEventTime186_next(nullptr);
        Info::CashItemRemoteStoreisConEventTime186_clbk CashItemRemoteStoreisConEventTime186_user(nullptr);
        
        Info::CashItemRemoteStoreis_cde_time188_ptr CashItemRemoteStoreis_cde_time188_next(nullptr);
        Info::CashItemRemoteStoreis_cde_time188_clbk CashItemRemoteStoreis_cde_time188_user(nullptr);
        
        Info::CashItemRemoteStoreload_cash_discount_event190_ptr CashItemRemoteStoreload_cash_discount_event190_next(nullptr);
        Info::CashItemRemoteStoreload_cash_discount_event190_clbk CashItemRemoteStoreload_cash_discount_event190_user(nullptr);
        
        Info::CashItemRemoteStoreload_cde_ini192_ptr CashItemRemoteStoreload_cde_ini192_next(nullptr);
        Info::CashItemRemoteStoreload_cde_ini192_clbk CashItemRemoteStoreload_cde_ini192_user(nullptr);
        
        Info::CashItemRemoteStoreload_con_event_ini194_ptr CashItemRemoteStoreload_con_event_ini194_next(nullptr);
        Info::CashItemRemoteStoreload_con_event_ini194_clbk CashItemRemoteStoreload_con_event_ini194_user(nullptr);
        
        Info::CashItemRemoteStorelog_about_cash_event196_ptr CashItemRemoteStorelog_about_cash_event196_next(nullptr);
        Info::CashItemRemoteStorelog_about_cash_event196_clbk CashItemRemoteStorelog_about_cash_event196_user(nullptr);
        
        Info::CashItemRemoteStoreloop_cash_discount_event198_ptr CashItemRemoteStoreloop_cash_discount_event198_next(nullptr);
        Info::CashItemRemoteStoreloop_cash_discount_event198_clbk CashItemRemoteStoreloop_cash_discount_event198_user(nullptr);
        
        Info::CashItemRemoteStoreset_cde_status200_ptr CashItemRemoteStoreset_cde_status200_next(nullptr);
        Info::CashItemRemoteStoreset_cde_status200_clbk CashItemRemoteStoreset_cde_status200_user(nullptr);
        
        Info::CashItemRemoteStorestart_cashevent202_ptr CashItemRemoteStorestart_cashevent202_next(nullptr);
        Info::CashItemRemoteStorestart_cashevent202_clbk CashItemRemoteStorestart_cashevent202_user(nullptr);
        
        Info::CashItemRemoteStorestart_cde204_ptr CashItemRemoteStorestart_cde204_next(nullptr);
        Info::CashItemRemoteStorestart_cde204_clbk CashItemRemoteStorestart_cde204_user(nullptr);
        
        Info::CashItemRemoteStorestart_conevent206_ptr CashItemRemoteStorestart_conevent206_next(nullptr);
        Info::CashItemRemoteStorestart_conevent206_clbk CashItemRemoteStorestart_conevent206_user(nullptr);
        
        Info::CashItemRemoteStoreupdate_ini208_ptr CashItemRemoteStoreupdate_ini208_next(nullptr);
        Info::CashItemRemoteStoreupdate_ini208_clbk CashItemRemoteStoreupdate_ini208_user(nullptr);
        
        
        Info::CashItemRemoteStoredtor_CashItemRemoteStore210_ptr CashItemRemoteStoredtor_CashItemRemoteStore210_next(nullptr);
        Info::CashItemRemoteStoredtor_CashItemRemoteStore210_clbk CashItemRemoteStoredtor_CashItemRemoteStore210_user(nullptr);
        
        bool CashItemRemoteStoreBuy2_wrapper(struct CashItemRemoteStore* _this, uint16_t wSock, char* pPacket)
        {
           return CashItemRemoteStoreBuy2_user(_this, wSock, pPacket, CashItemRemoteStoreBuy2_next);
        };
        bool CashItemRemoteStoreBuyByCash4_wrapper(struct CashItemRemoteStore* _this, uint16_t wSock, char* pPacket)
        {
           return CashItemRemoteStoreBuyByCash4_user(_this, wSock, pPacket, CashItemRemoteStoreBuyByCash4_next);
        };
        bool CashItemRemoteStoreBuyByGold6_wrapper(struct CashItemRemoteStore* _this, uint16_t wSock, char* pPacket)
        {
           return CashItemRemoteStoreBuyByGold6_user(_this, wSock, pPacket, CashItemRemoteStoreBuyByGold6_next);
        };
        uint16_t CashItemRemoteStoreBuyLimSale8_wrapper(struct CashItemRemoteStore* _this, char byTableCode, unsigned int dwIndex)
        {
           return CashItemRemoteStoreBuyLimSale8_user(_this, byTableCode, dwIndex, CashItemRemoteStoreBuyLimSale8_next);
        };
        
        void CashItemRemoteStorector_CashItemRemoteStore10_wrapper(struct CashItemRemoteStore* _this)
        {
           CashItemRemoteStorector_CashItemRemoteStore10_user(_this, CashItemRemoteStorector_CashItemRemoteStore10_next);
        };
        bool CashItemRemoteStoreChangeDiscountEventTime12_wrapper(struct CashItemRemoteStore* _this)
        {
           return CashItemRemoteStoreChangeDiscountEventTime12_user(_this, CashItemRemoteStoreChangeDiscountEventTime12_next);
        };
        bool CashItemRemoteStoreChangeEventTime14_wrapper(struct CashItemRemoteStore* _this, char byEventType)
        {
           return CashItemRemoteStoreChangeEventTime14_user(_this, byEventType, CashItemRemoteStoreChangeEventTime14_next);
        };
        void CashItemRemoteStoreChange_Conditional_Event_Status16_wrapper(struct CashItemRemoteStore* _this)
        {
           CashItemRemoteStoreChange_Conditional_Event_Status16_user(_this, CashItemRemoteStoreChange_Conditional_Event_Status16_next);
        };
        bool CashItemRemoteStoreCheatBuy18_wrapper(struct CashItemRemoteStore* _this, uint16_t wSock, char* szItemCode, int nNum)
        {
           return CashItemRemoteStoreCheatBuy18_user(_this, wSock, szItemCode, nNum, CashItemRemoteStoreCheatBuy18_next);
        };
        bool CashItemRemoteStoreCheatLoadCashAmount20_wrapper(struct CashItemRemoteStore* _this, uint16_t wSock, int nNum)
        {
           return CashItemRemoteStoreCheatLoadCashAmount20_user(_this, wSock, nNum, CashItemRemoteStoreCheatLoadCashAmount20_next);
        };
        int CashItemRemoteStoreCheckCouponType22_wrapper(struct CashItemRemoteStore* _this, struct _STORAGE_POS_INDIV* pCoupon, struct CPlayer* pOne, char byCouponNum)
        {
           return CashItemRemoteStoreCheckCouponType22_user(_this, pCoupon, pOne, byCouponNum, CashItemRemoteStoreCheckCouponType22_next);
        };
        bool CashItemRemoteStoreCheck_CashEvent_INI24_wrapper(struct CashItemRemoteStore* _this, char byEventType)
        {
           return CashItemRemoteStoreCheck_CashEvent_INI24_user(_this, byEventType, CashItemRemoteStoreCheck_CashEvent_INI24_next);
        };
        void CashItemRemoteStoreCheck_CashEvent_Status26_wrapper(struct CashItemRemoteStore* _this, char byEventType)
        {
           CashItemRemoteStoreCheck_CashEvent_Status26_user(_this, byEventType, CashItemRemoteStoreCheck_CashEvent_Status26_next);
        };
        void CashItemRemoteStoreCheck_Conditional_Event_INI28_wrapper(struct CashItemRemoteStore* _this)
        {
           CashItemRemoteStoreCheck_Conditional_Event_INI28_user(_this, CashItemRemoteStoreCheck_Conditional_Event_INI28_next);
        };
        void CashItemRemoteStoreCheck_Conditional_Event_Status30_wrapper(struct CashItemRemoteStore* _this)
        {
           CashItemRemoteStoreCheck_Conditional_Event_Status30_user(_this, CashItemRemoteStoreCheck_Conditional_Event_Status30_next);
        };
        void CashItemRemoteStoreCheck_Grosssales32_wrapper(struct CashItemRemoteStore* _this, unsigned int dwTotalSellCash)
        {
           CashItemRemoteStoreCheck_Grosssales32_user(_this, dwTotalSellCash, CashItemRemoteStoreCheck_Grosssales32_next);
        };
        void CashItemRemoteStoreCheck_Loaded_Event_Status34_wrapper(struct CashItemRemoteStore* _this, char byEventType)
        {
           CashItemRemoteStoreCheck_Loaded_Event_Status34_user(_this, byEventType, CashItemRemoteStoreCheck_Loaded_Event_Status34_next);
        };
        void CashItemRemoteStoreCheck_Total_Selling36_wrapper(struct CashItemRemoteStore* _this)
        {
           CashItemRemoteStoreCheck_Total_Selling36_user(_this, CashItemRemoteStoreCheck_Total_Selling36_next);
        };
        struct _CashShop_fld* CashItemRemoteStoreFindCashRec38_wrapper(int nTbl, int nIdx)
        {
           return CashItemRemoteStoreFindCashRec38_user(nTbl, nIdx, CashItemRemoteStoreFindCashRec38_next);
        };
        void CashItemRemoteStoreGetEvnetTime40_wrapper(struct CashItemRemoteStore* _this, struct _cash_event_time* pETime, int itime)
        {
           CashItemRemoteStoreGetEvnetTime40_user(_this, pETime, itime, CashItemRemoteStoreGetEvnetTime40_next);
        };
        char CashItemRemoteStoreGetLimDiscout42_wrapper(struct CashItemRemoteStore* _this)
        {
           return CashItemRemoteStoreGetLimDiscout42_user(_this, CashItemRemoteStoreGetLimDiscout42_next);
        };
        int CashItemRemoteStoreGetRemainNumOfGood44_wrapper(struct CashItemRemoteStore* _this, char* strCode)
        {
           return CashItemRemoteStoreGetRemainNumOfGood44_user(_this, strCode, CashItemRemoteStoreGetRemainNumOfGood44_next);
        };
        int CashItemRemoteStoreGetRemainNumOfGood46_wrapper(struct CashItemRemoteStore* _this, uint16_t wStoreIndex)
        {
           return CashItemRemoteStoreGetRemainNumOfGood46_user(_this, wStoreIndex, CashItemRemoteStoreGetRemainNumOfGood46_next);
        };
        char CashItemRemoteStoreGetSetDiscout48_wrapper(struct CashItemRemoteStore* _this, char bySetKind)
        {
           return CashItemRemoteStoreGetSetDiscout48_user(_this, bySetKind, CashItemRemoteStoreGetSetDiscout48_next);
        };
        char CashItemRemoteStoreGet_CashEvent_Status50_wrapper(struct CashItemRemoteStore* _this, char byEventType)
        {
           return CashItemRemoteStoreGet_CashEvent_Status50_user(_this, byEventType, CashItemRemoteStoreGet_CashEvent_Status50_next);
        };
        void CashItemRemoteStoreGet_Conditional_Event_Name52_wrapper(struct CashItemRemoteStore* _this, char byEventType, char* szEventName)
        {
           CashItemRemoteStoreGet_Conditional_Event_Name52_user(_this, byEventType, szEventName, CashItemRemoteStoreGet_Conditional_Event_Name52_next);
        };
        char CashItemRemoteStoreGet_Conditional_Event_Status54_wrapper(struct CashItemRemoteStore* _this)
        {
           return CashItemRemoteStoreGet_Conditional_Event_Status54_user(_this, CashItemRemoteStoreGet_Conditional_Event_Status54_next);
        };
        bool CashItemRemoteStoreGoodsList56_wrapper(struct CashItemRemoteStore* _this, uint16_t wSock, char* pPacket)
        {
           return CashItemRemoteStoreGoodsList56_user(_this, wSock, pPacket, CashItemRemoteStoreGoodsList56_next);
        };
        bool CashItemRemoteStoreGoodsListBuyByCash58_wrapper(struct CashItemRemoteStore* _this, uint16_t wSock, char* pPacket)
        {
           return CashItemRemoteStoreGoodsListBuyByCash58_user(_this, wSock, pPacket, CashItemRemoteStoreGoodsListBuyByCash58_next);
        };
        bool CashItemRemoteStoreGoodsListBuyByGold60_wrapper(struct CashItemRemoteStore* _this, uint16_t wSock, char* pPacket)
        {
           return CashItemRemoteStoreGoodsListBuyByGold60_user(_this, wSock, pPacket, CashItemRemoteStoreGoodsListBuyByGold60_next);
        };
        void CashItemRemoteStoreInform_CashEvent62_wrapper(struct CashItemRemoteStore* _this, uint16_t wIndex)
        {
           CashItemRemoteStoreInform_CashEvent62_user(_this, wIndex, CashItemRemoteStoreInform_CashEvent62_next);
        };
        void CashItemRemoteStoreInform_CashEvent_Status_All64_wrapper(struct CashItemRemoteStore* _this, char byEventType, char byStatus, struct _cash_event_ini* pIni)
        {
           CashItemRemoteStoreInform_CashEvent_Status_All64_user(_this, byEventType, byStatus, pIni, CashItemRemoteStoreInform_CashEvent_Status_All64_next);
        };
        void CashItemRemoteStoreInform_ConditionalEvent66_wrapper(struct CashItemRemoteStore* _this, uint16_t wIndex)
        {
           CashItemRemoteStoreInform_ConditionalEvent66_user(_this, wIndex, CashItemRemoteStoreInform_ConditionalEvent66_next);
        };
        void CashItemRemoteStoreInform_ConditionalEvent_Status_All68_wrapper(struct CashItemRemoteStore* _this, char byEventType, char byStatus, char* pszMsg)
        {
           CashItemRemoteStoreInform_ConditionalEvent_Status_All68_user(_this, byEventType, byStatus, pszMsg, CashItemRemoteStoreInform_ConditionalEvent_Status_All68_next);
        };
        bool CashItemRemoteStoreInitialize70_wrapper(struct CashItemRemoteStore* _this)
        {
           return CashItemRemoteStoreInitialize70_user(_this, CashItemRemoteStoreInitialize70_next);
        };
        struct CashItemRemoteStore* CashItemRemoteStoreInstance72_wrapper()
        {
           return CashItemRemoteStoreInstance72_user(CashItemRemoteStoreInstance72_next);
        };
        bool CashItemRemoteStoreIsBuyCashItemByGold74_wrapper(struct CashItemRemoteStore* _this)
        {
           return CashItemRemoteStoreIsBuyCashItemByGold74_user(_this, CashItemRemoteStoreIsBuyCashItemByGold74_next);
        };
        bool CashItemRemoteStoreIsEventTime76_wrapper(struct CashItemRemoteStore* _this, char byEventType)
        {
           return CashItemRemoteStoreIsEventTime76_user(_this, byEventType, CashItemRemoteStoreIsEventTime76_next);
        };
        bool CashItemRemoteStoreIsUsableCoupon78_wrapper(struct CashItemRemoteStore* _this, struct _request_csi_buy_clzo* pBuyList, struct _STORAGE_POS_INDIV pCoupon, struct CPlayer* pOne, bool* bCheck)
        {
           return CashItemRemoteStoreIsUsableCoupon78_user(_this, pBuyList, pCoupon, pOne, bCheck, CashItemRemoteStoreIsUsableCoupon78_next);
        };
        bool CashItemRemoteStoreLimitedSale_check_count80_wrapper(struct CashItemRemoteStore* _this, char byTableCode, unsigned int dwIndex)
        {
           return CashItemRemoteStoreLimitedSale_check_count80_user(_this, byTableCode, dwIndex, CashItemRemoteStoreLimitedSale_check_count80_next);
        };
        bool CashItemRemoteStoreLoadBuyCashMode82_wrapper(struct CashItemRemoteStore* _this)
        {
           return CashItemRemoteStoreLoadBuyCashMode82_user(_this, CashItemRemoteStoreLoadBuyCashMode82_next);
        };
        bool CashItemRemoteStoreLoadNationalPrice84_wrapper(struct CashItemRemoteStore* _this, struct CRecordData* krecPrice)
        {
           return CashItemRemoteStoreLoadNationalPrice84_user(_this, krecPrice, CashItemRemoteStoreLoadNationalPrice84_next);
        };
        void CashItemRemoteStoreLoad_Cash_Event86_wrapper(struct CashItemRemoteStore* _this)
        {
           CashItemRemoteStoreLoad_Cash_Event86_user(_this, CashItemRemoteStoreLoad_Cash_Event86_next);
        };
        void CashItemRemoteStoreLoad_Conditional_Event88_wrapper(struct CashItemRemoteStore* _this)
        {
           CashItemRemoteStoreLoad_Conditional_Event88_user(_this, CashItemRemoteStoreLoad_Conditional_Event88_next);
        };
        void CashItemRemoteStoreLoad_Event_INI90_wrapper(struct CashItemRemoteStore* _this, struct _cash_event_ini* pIni, struct _FILETIME* pft, char* pEventType)
        {
           CashItemRemoteStoreLoad_Event_INI90_user(_this, pIni, pft, pEventType, CashItemRemoteStoreLoad_Event_INI90_next);
        };
        void CashItemRemoteStoreLoad_LimitedSale_Event_INI92_wrapper(struct CashItemRemoteStore* _this, struct _cash_event_ini* pIni, struct _FILETIME* pft, char* pEventType)
        {
           CashItemRemoteStoreLoad_LimitedSale_Event_INI92_user(_this, pIni, pft, pEventType, CashItemRemoteStoreLoad_LimitedSale_Event_INI92_next);
        };
        void CashItemRemoteStoreLoop_Cash_Event94_wrapper(struct CashItemRemoteStore* _this)
        {
           CashItemRemoteStoreLoop_Cash_Event94_user(_this, CashItemRemoteStoreLoop_Cash_Event94_next);
        };
        void CashItemRemoteStoreLoop_Check_Total_Selling96_wrapper(struct CashItemRemoteStore* _this)
        {
           CashItemRemoteStoreLoop_Check_Total_Selling96_user(_this, CashItemRemoteStoreLoop_Check_Total_Selling96_next);
        };
        void CashItemRemoteStoreLoop_ContEvent98_wrapper(struct CashItemRemoteStore* _this)
        {
           CashItemRemoteStoreLoop_ContEvent98_user(_this, CashItemRemoteStoreLoop_ContEvent98_next);
        };
        void CashItemRemoteStoreLoop_TatalCashEvent100_wrapper(struct CashItemRemoteStore* _this)
        {
           CashItemRemoteStoreLoop_TatalCashEvent100_user(_this, CashItemRemoteStoreLoop_TatalCashEvent100_next);
        };
        bool CashItemRemoteStoreSell102_wrapper(struct CashItemRemoteStore* _this, uint16_t wSock, char* pPacket)
        {
           return CashItemRemoteStoreSell102_user(_this, wSock, pPacket, CashItemRemoteStoreSell102_next);
        };
        bool CashItemRemoteStoreSetNextDiscountEventTime104_wrapper(struct CashItemRemoteStore* _this)
        {
           return CashItemRemoteStoreSetNextDiscountEventTime104_user(_this, CashItemRemoteStoreSetNextDiscountEventTime104_next);
        };
        bool CashItemRemoteStoreSetNextEventTime106_wrapper(struct CashItemRemoteStore* _this, char byEventType)
        {
           return CashItemRemoteStoreSetNextEventTime106_user(_this, byEventType, CashItemRemoteStoreSetNextEventTime106_next);
        };
        void CashItemRemoteStoreSet_CashEvent_Status108_wrapper(struct CashItemRemoteStore* _this, char byEventType, char byStatus)
        {
           CashItemRemoteStoreSet_CashEvent_Status108_user(_this, byEventType, byStatus, CashItemRemoteStoreSet_CashEvent_Status108_next);
        };
        void CashItemRemoteStoreSet_Conditional_Evnet_Status110_wrapper(struct CashItemRemoteStore* _this, char byStatus)
        {
           CashItemRemoteStoreSet_Conditional_Evnet_Status110_user(_this, byStatus, CashItemRemoteStoreSet_Conditional_Evnet_Status110_next);
        };
        void CashItemRemoteStoreSet_DB_LimitedSale_Event112_wrapper(struct CashItemRemoteStore* _this)
        {
           CashItemRemoteStoreSet_DB_LimitedSale_Event112_user(_this, CashItemRemoteStoreSet_DB_LimitedSale_Event112_next);
        };
        void CashItemRemoteStoreSet_FROMDB_LimitedSale_Event114_wrapper(struct CashItemRemoteStore* _this, struct _db_cash_limited_sale* Sheet)
        {
           CashItemRemoteStoreSet_FROMDB_LimitedSale_Event114_user(_this, Sheet, CashItemRemoteStoreSet_FROMDB_LimitedSale_Event114_next);
        };
        void CashItemRemoteStoreSet_LimitedSale_DCK116_wrapper(struct CashItemRemoteStore* _this, char byEventType, char byDCK)
        {
           CashItemRemoteStoreSet_LimitedSale_DCK116_user(_this, byEventType, byDCK, CashItemRemoteStoreSet_LimitedSale_DCK116_next);
        };
        void CashItemRemoteStoreSet_LimitedSale_Event118_wrapper(struct CashItemRemoteStore* _this)
        {
           CashItemRemoteStoreSet_LimitedSale_Event118_user(_this, CashItemRemoteStoreSet_LimitedSale_Event118_next);
        };
        void CashItemRemoteStoreSet_LimitedSale_Event_Ini120_wrapper(struct CashItemRemoteStore* _this, struct _cash_event_ini* pIni)
        {
           CashItemRemoteStoreSet_LimitedSale_Event_Ini120_user(_this, pIni, CashItemRemoteStoreSet_LimitedSale_Event_Ini120_next);
        };
        void CashItemRemoteStoreSet_LimitedSale_count122_wrapper(struct CashItemRemoteStore* _this, char byTableCode, unsigned int dwIndex)
        {
           CashItemRemoteStoreSet_LimitedSale_count122_user(_this, byTableCode, dwIndex, CashItemRemoteStoreSet_LimitedSale_count122_next);
        };
        void CashItemRemoteStoreUpdate_INI124_wrapper(struct CashItemRemoteStore* _this, struct _cash_event_ini* pNewIni, char byEventType)
        {
           CashItemRemoteStoreUpdate_INI124_user(_this, pNewIni, byEventType, CashItemRemoteStoreUpdate_INI124_next);
        };
        bool CashItemRemoteStoreUseDiscountCoupon126_wrapper(struct CashItemRemoteStore* _this, struct _param_cash_update* pBuyList, struct _STORAGE_POS_INDIV pCoupon, struct CPlayer* pOne)
        {
           return CashItemRemoteStoreUseDiscountCoupon126_user(_this, pBuyList, pCoupon, pOne, CashItemRemoteStoreUseDiscountCoupon126_next);
        };
        bool CashItemRemoteStore_InitLoggers128_wrapper(struct CashItemRemoteStore* _this)
        {
           return CashItemRemoteStore_InitLoggers128_user(_this, CashItemRemoteStore_InitLoggers128_next);
        };
        bool CashItemRemoteStore_MakeLinkTable130_wrapper(struct CashItemRemoteStore* _this, char* szMsg, int nSize)
        {
           return CashItemRemoteStore_MakeLinkTable130_user(_this, szMsg, nSize, CashItemRemoteStore_MakeLinkTable130_next);
        };
        bool CashItemRemoteStore_ReadGoods132_wrapper(struct CashItemRemoteStore* _this)
        {
           return CashItemRemoteStore_ReadGoods132_user(_this, CashItemRemoteStore_ReadGoods132_next);
        };
        bool CashItemRemoteStore__CheckGoods134_wrapper(struct CashItemRemoteStore* _this, struct CRecordData* krecPrice)
        {
           return CashItemRemoteStore__CheckGoods134_user(_this, krecPrice, CashItemRemoteStore__CheckGoods134_next);
        };
        CS_RCODE CashItemRemoteStore_buybygold_buy_single_item136_wrapper(struct CashItemRemoteStore* _this, struct CPlayer* pOne, struct _request_csi_buy_clzo* pRecv, struct _request_csi_buy_clzo::__item* pSrc, struct _param_cashitem_dblog* pSheet, bool* bCouponUse, struct _result_csi_buy_zocl* Send)
        {
           return CashItemRemoteStore_buybygold_buy_single_item136_user(_this, pOne, pRecv, pSrc, pSheet, bCouponUse, Send, CashItemRemoteStore_buybygold_buy_single_item136_next);
        };
        CS_RCODE CashItemRemoteStore_buybygold_buy_single_item_additional_process138_wrapper(struct CashItemRemoteStore* _this, struct CPlayer* pOne, struct _request_csi_buy_clzo::__item* pSrc, struct _param_cashitem_dblog* pSheet, struct _result_csi_buy_zocl* Send)
        {
           return CashItemRemoteStore_buybygold_buy_single_item_additional_process138_user(_this, pOne, pSrc, pSheet, Send, CashItemRemoteStore_buybygold_buy_single_item_additional_process138_next);
        };
        unsigned int CashItemRemoteStore_buybygold_buy_single_item_calc_price140_wrapper(struct CashItemRemoteStore* _this, struct CPlayer* pOne, struct _request_csi_buy_clzo* pRecv, struct _request_csi_buy_clzo::__item* pSrc, struct _param_cashitem_dblog* pSheet, struct _CashShop_fld* pCsFld, bool* bCouponUseCheck, struct _result_csi_buy_zocl* Send, unsigned int* dwDiscount)
        {
           return CashItemRemoteStore_buybygold_buy_single_item_calc_price140_user(_this, pOne, pRecv, pSrc, pSheet, pCsFld, bCouponUseCheck, Send, dwDiscount, CashItemRemoteStore_buybygold_buy_single_item_calc_price140_next);
        };
        unsigned int CashItemRemoteStore_buybygold_buy_single_item_calc_price_coupon142_wrapper(struct CashItemRemoteStore* _this, struct CPlayer* pOne, struct _request_csi_buy_clzo* pRecv, char byOverlapNum, int nCsPrice, bool* bCouponUseCheck, unsigned int* dwDiscount)
        {
           return CashItemRemoteStore_buybygold_buy_single_item_calc_price_coupon142_user(_this, pOne, pRecv, byOverlapNum, nCsPrice, bCouponUseCheck, dwDiscount, CashItemRemoteStore_buybygold_buy_single_item_calc_price_coupon142_next);
        };
        unsigned int CashItemRemoteStore_buybygold_buy_single_item_calc_price_discount144_wrapper(struct CashItemRemoteStore* _this, struct _CashShop_fld* pCsFld, char byOverlapNum)
        {
           return CashItemRemoteStore_buybygold_buy_single_item_calc_price_discount144_user(_this, pCsFld, byOverlapNum, CashItemRemoteStore_buybygold_buy_single_item_calc_price_discount144_next);
        };
        unsigned int CashItemRemoteStore_buybygold_buy_single_item_calc_price_limitsale146_wrapper(struct CashItemRemoteStore* _this, int nCsPrice, char byOverlapNum)
        {
           return CashItemRemoteStore_buybygold_buy_single_item_calc_price_limitsale146_user(_this, nCsPrice, byOverlapNum, CashItemRemoteStore_buybygold_buy_single_item_calc_price_limitsale146_next);
        };
        unsigned int CashItemRemoteStore_buybygold_buy_single_item_calc_price_one_n_one148_wrapper(struct CashItemRemoteStore* _this, char bySetKind, int nCsPrice, char byOverlapNum)
        {
           return CashItemRemoteStore_buybygold_buy_single_item_calc_price_one_n_one148_user(_this, bySetKind, nCsPrice, byOverlapNum, CashItemRemoteStore_buybygold_buy_single_item_calc_price_one_n_one148_next);
        };
        CS_RCODE CashItemRemoteStore_buybygold_buy_single_item_check_item150_wrapper(struct CashItemRemoteStore* _this, struct CPlayer* pOne, struct _request_csi_buy_clzo::__item* pSrc, struct _param_cashitem_dblog* pSheet, struct _CashShop_fld** pCsFld)
        {
           return CashItemRemoteStore_buybygold_buy_single_item_check_item150_user(_this, pOne, pSrc, pSheet, pCsFld, CashItemRemoteStore_buybygold_buy_single_item_check_item150_next);
        };
        CS_RCODE CashItemRemoteStore_buybygold_buy_single_item_give_item152_wrapper(struct CashItemRemoteStore* _this, struct CPlayer* pOne, struct _request_csi_buy_clzo::__item* pSrc, struct _STORAGE_LIST::_db_con* GiveItem)
        {
           return CashItemRemoteStore_buybygold_buy_single_item_give_item152_user(_this, pOne, pSrc, GiveItem, CashItemRemoteStore_buybygold_buy_single_item_give_item152_next);
        };
        void CashItemRemoteStore_buybygold_buy_single_item_proc_complete154_wrapper(struct CashItemRemoteStore* _this, struct CPlayer* pOne, struct _request_csi_buy_clzo::__item* pSrc, struct _param_cashitem_dblog* pSheet, struct _CashShop_fld* pCsFld, struct _STORAGE_LIST::_db_con* GiveItem, struct _result_csi_buy_zocl* Send, unsigned int dwPrice, unsigned int dwDiscountRate, bool* bCouponUseCheck, bool* bCouponUse)
        {
           CashItemRemoteStore_buybygold_buy_single_item_proc_complete154_user(_this, pOne, pSrc, pSheet, pCsFld, GiveItem, Send, dwPrice, dwDiscountRate, bCouponUseCheck, bCouponUse, CashItemRemoteStore_buybygold_buy_single_item_proc_complete154_next);
        };
        CS_RCODE CashItemRemoteStore_buybygold_buy_single_item_proc_price156_wrapper(struct CashItemRemoteStore* _this, struct CPlayer* pOne, struct _request_csi_buy_clzo* pRecv, struct _request_csi_buy_clzo::__item* pSrc, struct _param_cashitem_dblog* pSheet, struct _CashShop_fld* pCsFld, bool* bCouponUseCheck, struct _result_csi_buy_zocl* Send, unsigned int* dwPrice, unsigned int* dwDiscountRate)
        {
           return CashItemRemoteStore_buybygold_buy_single_item_proc_price156_user(_this, pOne, pRecv, pSrc, pSheet, pCsFld, bCouponUseCheck, Send, dwPrice, dwDiscountRate, CashItemRemoteStore_buybygold_buy_single_item_proc_price156_next);
        };
        void CashItemRemoteStore_buybygold_buy_single_item_setbuydblog158_wrapper(struct CashItemRemoteStore* _this, struct _param_cashitem_dblog* pSheet, struct _STORAGE_LIST::_db_con* GiveItem, unsigned int dwPrice, unsigned int dwDiscountRate)
        {
           CashItemRemoteStore_buybygold_buy_single_item_setbuydblog158_user(_this, pSheet, GiveItem, dwPrice, dwDiscountRate, CashItemRemoteStore_buybygold_buy_single_item_setbuydblog158_next);
        };
        void CashItemRemoteStore_buybygold_buy_single_item_setsenddata160_wrapper(struct CashItemRemoteStore* _this, struct _STORAGE_LIST::_db_con* GiveItem, struct _result_csi_buy_zocl* Send)
        {
           CashItemRemoteStore_buybygold_buy_single_item_setsenddata160_user(_this, GiveItem, Send, CashItemRemoteStore_buybygold_buy_single_item_setsenddata160_next);
        };
        CS_RCODE CashItemRemoteStore_buybygold_check_coupon162_wrapper(struct CashItemRemoteStore* _this, struct CPlayer* pOne, struct _request_csi_buy_clzo* pRecv, struct _param_cashitem_dblog* pSheet)
        {
           return CashItemRemoteStore_buybygold_check_coupon162_user(_this, pOne, pRecv, pSheet, CashItemRemoteStore_buybygold_check_coupon162_next);
        };
        CS_RCODE CashItemRemoteStore_buybygold_check_valid164_wrapper(struct CashItemRemoteStore* _this, struct CPlayer* pOne, struct _request_csi_buy_clzo* pRecv, struct _param_cashitem_dblog* pSheet)
        {
           return CashItemRemoteStore_buybygold_check_valid164_user(_this, pOne, pRecv, pSheet, CashItemRemoteStore_buybygold_check_valid164_next);
        };
        void CashItemRemoteStore_buybygold_complete166_wrapper(struct CashItemRemoteStore* _this, struct CPlayer* pOne, struct _result_csi_buy_zocl* Send, struct _request_csi_buy_clzo* pRecv, struct _request_csi_buy_clzo::__item* pSrc, struct _param_cashitem_dblog* pSheet, bool bCouponUse)
        {
           CashItemRemoteStore_buybygold_complete166_user(_this, pOne, Send, pRecv, pSrc, pSheet, bCouponUse, CashItemRemoteStore_buybygold_complete166_next);
        };
        void CashItemRemoteStore_buybygold_set_cashitem_dblog_sheet168_wrapper(struct CashItemRemoteStore* _this, struct CPlayer* pOne, struct _param_cashitem_dblog* pSheet)
        {
           CashItemRemoteStore_buybygold_set_cashitem_dblog_sheet168_user(_this, pOne, pSheet, CashItemRemoteStore_buybygold_set_cashitem_dblog_sheet168_next);
        };
        CS_RCODE CashItemRemoteStore_check_buyitem170_wrapper(struct CashItemRemoteStore* _this, char byRaceSex, struct _request_csi_buy_clzo::__item* pCsItem, struct _CashShop_fld* pFld)
        {
           return CashItemRemoteStore_check_buyitem170_user(_this, byRaceSex, pCsItem, pFld, CashItemRemoteStore_check_buyitem170_next);
        };
        void CashItemRemoteStorecheck_cash_discount_ini172_wrapper(struct CashItemRemoteStore* _this)
        {
           CashItemRemoteStorecheck_cash_discount_ini172_user(_this, CashItemRemoteStorecheck_cash_discount_ini172_next);
        };
        void CashItemRemoteStorecheck_cash_discount_status174_wrapper(struct CashItemRemoteStore* _this)
        {
           CashItemRemoteStorecheck_cash_discount_status174_user(_this, CashItemRemoteStorecheck_cash_discount_status174_next);
        };
        void CashItemRemoteStorecheck_loaded_cde_status176_wrapper(struct CashItemRemoteStore* _this)
        {
           CashItemRemoteStorecheck_loaded_cde_status176_user(_this, CashItemRemoteStorecheck_loaded_cde_status176_next);
        };
        void CashItemRemoteStoreforce_endup_cash_discount_event178_wrapper(struct CashItemRemoteStore* _this)
        {
           CashItemRemoteStoreforce_endup_cash_discount_event178_user(_this, CashItemRemoteStoreforce_endup_cash_discount_event178_next);
        };
        char CashItemRemoteStoreget_cde_status180_wrapper(struct CashItemRemoteStore* _this)
        {
           return CashItemRemoteStoreget_cde_status180_user(_this, CashItemRemoteStoreget_cde_status180_next);
        };
        void CashItemRemoteStoreinform_cashdiscount_event182_wrapper(struct CashItemRemoteStore* _this, uint16_t widx)
        {
           CashItemRemoteStoreinform_cashdiscount_event182_user(_this, widx, CashItemRemoteStoreinform_cashdiscount_event182_next);
        };
        void CashItemRemoteStoreinform_cashdiscount_status_all184_wrapper(struct CashItemRemoteStore* _this, char byType, struct _cash_discount_ini_* pIni)
        {
           CashItemRemoteStoreinform_cashdiscount_status_all184_user(_this, byType, pIni, CashItemRemoteStoreinform_cashdiscount_status_all184_next);
        };
        bool CashItemRemoteStoreisConEventTime186_wrapper(struct CashItemRemoteStore* _this)
        {
           return CashItemRemoteStoreisConEventTime186_user(_this, CashItemRemoteStoreisConEventTime186_next);
        };
        bool CashItemRemoteStoreis_cde_time188_wrapper(struct CashItemRemoteStore* _this)
        {
           return CashItemRemoteStoreis_cde_time188_user(_this, CashItemRemoteStoreis_cde_time188_next);
        };
        void CashItemRemoteStoreload_cash_discount_event190_wrapper(struct CashItemRemoteStore* _this)
        {
           CashItemRemoteStoreload_cash_discount_event190_user(_this, CashItemRemoteStoreload_cash_discount_event190_next);
        };
        void CashItemRemoteStoreload_cde_ini192_wrapper(struct CashItemRemoteStore* _this, struct _cash_discount_ini_* pIni, struct _FILETIME* pft)
        {
           CashItemRemoteStoreload_cde_ini192_user(_this, pIni, pft, CashItemRemoteStoreload_cde_ini192_next);
        };
        void CashItemRemoteStoreload_con_event_ini194_wrapper(struct CashItemRemoteStore* _this, struct _con_event_ini* pIni, struct _FILETIME* pft)
        {
           CashItemRemoteStoreload_con_event_ini194_user(_this, pIni, pft, CashItemRemoteStoreload_con_event_ini194_next);
        };
        void CashItemRemoteStorelog_about_cash_event196_wrapper(struct CashItemRemoteStore* _this, char* szLoadInfo, struct _cash_discount_ini_* pIni)
        {
           CashItemRemoteStorelog_about_cash_event196_user(_this, szLoadInfo, pIni, CashItemRemoteStorelog_about_cash_event196_next);
        };
        void CashItemRemoteStoreloop_cash_discount_event198_wrapper(struct CashItemRemoteStore* _this)
        {
           CashItemRemoteStoreloop_cash_discount_event198_user(_this, CashItemRemoteStoreloop_cash_discount_event198_next);
        };
        void CashItemRemoteStoreset_cde_status200_wrapper(struct CashItemRemoteStore* _this, char byStatus)
        {
           CashItemRemoteStoreset_cde_status200_user(_this, byStatus, CashItemRemoteStoreset_cde_status200_next);
        };
        bool CashItemRemoteStorestart_cashevent202_wrapper(struct CashItemRemoteStore* _this, int iBegin_TT, int iB30_TT, int iB5_TT, int iEnd_TT, char byEventType)
        {
           return CashItemRemoteStorestart_cashevent202_user(_this, iBegin_TT, iB30_TT, iB5_TT, iEnd_TT, byEventType, CashItemRemoteStorestart_cashevent202_next);
        };
        bool CashItemRemoteStorestart_cde204_wrapper(struct CashItemRemoteStore* _this, int iBegin_TT, int iB30_TT, int iB5_TT, int iEnd_TT)
        {
           return CashItemRemoteStorestart_cde204_user(_this, iBegin_TT, iB30_TT, iB5_TT, iEnd_TT, CashItemRemoteStorestart_cde204_next);
        };
        bool CashItemRemoteStorestart_conevent206_wrapper(struct CashItemRemoteStore* _this, int iBegin_TT, int iEnd_TT, char byEventType)
        {
           return CashItemRemoteStorestart_conevent206_user(_this, iBegin_TT, iEnd_TT, byEventType, CashItemRemoteStorestart_conevent206_next);
        };
        void CashItemRemoteStoreupdate_ini208_wrapper(struct CashItemRemoteStore* _this, struct _cash_discount_ini_* pNewIni)
        {
           CashItemRemoteStoreupdate_ini208_user(_this, pNewIni, CashItemRemoteStoreupdate_ini208_next);
        };
        
        void CashItemRemoteStoredtor_CashItemRemoteStore210_wrapper(struct CashItemRemoteStore* _this)
        {
           CashItemRemoteStoredtor_CashItemRemoteStore210_user(_this, CashItemRemoteStoredtor_CashItemRemoteStore210_next);
        };
        
        ::std::array<hook_record, 105> CashItemRemoteStore_functions = 
        {
            _hook_record {
                (LPVOID)0x1402fe050L,
                (LPVOID *)&CashItemRemoteStoreBuy2_user,
                (LPVOID *)&CashItemRemoteStoreBuy2_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreBuy2_wrapper),
                (LPVOID)cast_pointer_function((bool(CashItemRemoteStore::*)(uint16_t, char*))&CashItemRemoteStore::Buy)
            },
            _hook_record {
                (LPVOID)0x1402fe0d0L,
                (LPVOID *)&CashItemRemoteStoreBuyByCash4_user,
                (LPVOID *)&CashItemRemoteStoreBuyByCash4_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreBuyByCash4_wrapper),
                (LPVOID)cast_pointer_function((bool(CashItemRemoteStore::*)(uint16_t, char*))&CashItemRemoteStore::BuyByCash)
            },
            _hook_record {
                (LPVOID)0x1402fecc0L,
                (LPVOID *)&CashItemRemoteStoreBuyByGold6_user,
                (LPVOID *)&CashItemRemoteStoreBuyByGold6_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreBuyByGold6_wrapper),
                (LPVOID)cast_pointer_function((bool(CashItemRemoteStore::*)(uint16_t, char*))&CashItemRemoteStore::BuyByGold)
            },
            _hook_record {
                (LPVOID)0x1402fd950L,
                (LPVOID *)&CashItemRemoteStoreBuyLimSale8_user,
                (LPVOID *)&CashItemRemoteStoreBuyLimSale8_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreBuyLimSale8_wrapper),
                (LPVOID)cast_pointer_function((uint16_t(CashItemRemoteStore::*)(char, unsigned int))&CashItemRemoteStore::BuyLimSale)
            },
            _hook_record {
                (LPVOID)0x1402f3800L,
                (LPVOID *)&CashItemRemoteStorector_CashItemRemoteStore10_user,
                (LPVOID *)&CashItemRemoteStorector_CashItemRemoteStore10_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStorector_CashItemRemoteStore10_wrapper),
                (LPVOID)cast_pointer_function((void(CashItemRemoteStore::*)())&CashItemRemoteStore::ctor_CashItemRemoteStore)
            },
            _hook_record {
                (LPVOID)0x1402f7b10L,
                (LPVOID *)&CashItemRemoteStoreChangeDiscountEventTime12_user,
                (LPVOID *)&CashItemRemoteStoreChangeDiscountEventTime12_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreChangeDiscountEventTime12_wrapper),
                (LPVOID)cast_pointer_function((bool(CashItemRemoteStore::*)())&CashItemRemoteStore::ChangeDiscountEventTime)
            },
            _hook_record {
                (LPVOID)0x1402fd050L,
                (LPVOID *)&CashItemRemoteStoreChangeEventTime14_user,
                (LPVOID *)&CashItemRemoteStoreChangeEventTime14_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreChangeEventTime14_wrapper),
                (LPVOID)cast_pointer_function((bool(CashItemRemoteStore::*)(char))&CashItemRemoteStore::ChangeEventTime)
            },
            _hook_record {
                (LPVOID)0x1402fbf00L,
                (LPVOID *)&CashItemRemoteStoreChange_Conditional_Event_Status16_user,
                (LPVOID *)&CashItemRemoteStoreChange_Conditional_Event_Status16_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreChange_Conditional_Event_Status16_wrapper),
                (LPVOID)cast_pointer_function((void(CashItemRemoteStore::*)())&CashItemRemoteStore::Change_Conditional_Event_Status)
            },
            _hook_record {
                (LPVOID)0x1402f5b50L,
                (LPVOID *)&CashItemRemoteStoreCheatBuy18_user,
                (LPVOID *)&CashItemRemoteStoreCheatBuy18_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreCheatBuy18_wrapper),
                (LPVOID)cast_pointer_function((bool(CashItemRemoteStore::*)(uint16_t, char*, int))&CashItemRemoteStore::CheatBuy)
            },
            _hook_record {
                (LPVOID)0x1402f5990L,
                (LPVOID *)&CashItemRemoteStoreCheatLoadCashAmount20_user,
                (LPVOID *)&CashItemRemoteStoreCheatLoadCashAmount20_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreCheatLoadCashAmount20_wrapper),
                (LPVOID)cast_pointer_function((bool(CashItemRemoteStore::*)(uint16_t, int))&CashItemRemoteStore::CheatLoadCashAmount)
            },
            _hook_record {
                (LPVOID)0x1402f52a0L,
                (LPVOID *)&CashItemRemoteStoreCheckCouponType22_user,
                (LPVOID *)&CashItemRemoteStoreCheckCouponType22_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreCheckCouponType22_wrapper),
                (LPVOID)cast_pointer_function((int(CashItemRemoteStore::*)(struct _STORAGE_POS_INDIV*, struct CPlayer*, char))&CashItemRemoteStore::CheckCouponType)
            },
            _hook_record {
                (LPVOID)0x1402f8770L,
                (LPVOID *)&CashItemRemoteStoreCheck_CashEvent_INI24_user,
                (LPVOID *)&CashItemRemoteStoreCheck_CashEvent_INI24_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreCheck_CashEvent_INI24_wrapper),
                (LPVOID)cast_pointer_function((bool(CashItemRemoteStore::*)(char))&CashItemRemoteStore::Check_CashEvent_INI)
            },
            _hook_record {
                (LPVOID)0x1402f93c0L,
                (LPVOID *)&CashItemRemoteStoreCheck_CashEvent_Status26_user,
                (LPVOID *)&CashItemRemoteStoreCheck_CashEvent_Status26_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreCheck_CashEvent_Status26_wrapper),
                (LPVOID)cast_pointer_function((void(CashItemRemoteStore::*)(char))&CashItemRemoteStore::Check_CashEvent_Status)
            },
            _hook_record {
                (LPVOID)0x1402fc480L,
                (LPVOID *)&CashItemRemoteStoreCheck_Conditional_Event_INI28_user,
                (LPVOID *)&CashItemRemoteStoreCheck_Conditional_Event_INI28_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreCheck_Conditional_Event_INI28_wrapper),
                (LPVOID)cast_pointer_function((void(CashItemRemoteStore::*)())&CashItemRemoteStore::Check_Conditional_Event_INI)
            },
            _hook_record {
                (LPVOID)0x1402fc060L,
                (LPVOID *)&CashItemRemoteStoreCheck_Conditional_Event_Status30_user,
                (LPVOID *)&CashItemRemoteStoreCheck_Conditional_Event_Status30_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreCheck_Conditional_Event_Status30_wrapper),
                (LPVOID)cast_pointer_function((void(CashItemRemoteStore::*)())&CashItemRemoteStore::Check_Conditional_Event_Status)
            },
            _hook_record {
                (LPVOID)0x1402fb6d0L,
                (LPVOID *)&CashItemRemoteStoreCheck_Grosssales32_user,
                (LPVOID *)&CashItemRemoteStoreCheck_Grosssales32_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreCheck_Grosssales32_wrapper),
                (LPVOID)cast_pointer_function((void(CashItemRemoteStore::*)(unsigned int))&CashItemRemoteStore::Check_Grosssales)
            },
            _hook_record {
                (LPVOID)0x1402f8140L,
                (LPVOID *)&CashItemRemoteStoreCheck_Loaded_Event_Status34_user,
                (LPVOID *)&CashItemRemoteStoreCheck_Loaded_Event_Status34_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreCheck_Loaded_Event_Status34_wrapper),
                (LPVOID)cast_pointer_function((void(CashItemRemoteStore::*)(char))&CashItemRemoteStore::Check_Loaded_Event_Status)
            },
            _hook_record {
                (LPVOID)0x1402fb640L,
                (LPVOID *)&CashItemRemoteStoreCheck_Total_Selling36_user,
                (LPVOID *)&CashItemRemoteStoreCheck_Total_Selling36_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreCheck_Total_Selling36_wrapper),
                (LPVOID)cast_pointer_function((void(CashItemRemoteStore::*)())&CashItemRemoteStore::Check_Total_Selling)
            },
            _hook_record {
                (LPVOID)0x1402f48f0L,
                (LPVOID *)&CashItemRemoteStoreFindCashRec38_user,
                (LPVOID *)&CashItemRemoteStoreFindCashRec38_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreFindCashRec38_wrapper),
                (LPVOID)cast_pointer_function((struct _CashShop_fld*(*)(int, int))&CashItemRemoteStore::FindCashRec)
            },
            _hook_record {
                (LPVOID)0x1402fba00L,
                (LPVOID *)&CashItemRemoteStoreGetEvnetTime40_user,
                (LPVOID *)&CashItemRemoteStoreGetEvnetTime40_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreGetEvnetTime40_wrapper),
                (LPVOID)cast_pointer_function((void(CashItemRemoteStore::*)(struct _cash_event_time*, int))&CashItemRemoteStore::GetEvnetTime)
            },
            _hook_record {
                (LPVOID)0x1402fd930L,
                (LPVOID *)&CashItemRemoteStoreGetLimDiscout42_user,
                (LPVOID *)&CashItemRemoteStoreGetLimDiscout42_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreGetLimDiscout42_wrapper),
                (LPVOID)cast_pointer_function((char(CashItemRemoteStore::*)())&CashItemRemoteStore::GetLimDiscout)
            },
            _hook_record {
                (LPVOID)0x1402f5d60L,
                (LPVOID *)&CashItemRemoteStoreGetRemainNumOfGood44_user,
                (LPVOID *)&CashItemRemoteStoreGetRemainNumOfGood44_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreGetRemainNumOfGood44_wrapper),
                (LPVOID)cast_pointer_function((int(CashItemRemoteStore::*)(char*))&CashItemRemoteStore::GetRemainNumOfGood)
            },
            _hook_record {
                (LPVOID)0x1402f5cd0L,
                (LPVOID *)&CashItemRemoteStoreGetRemainNumOfGood46_user,
                (LPVOID *)&CashItemRemoteStoreGetRemainNumOfGood46_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreGetRemainNumOfGood46_wrapper),
                (LPVOID)cast_pointer_function((int(CashItemRemoteStore::*)(uint16_t))&CashItemRemoteStore::GetRemainNumOfGood)
            },
            _hook_record {
                (LPVOID)0x1402fb0a0L,
                (LPVOID *)&CashItemRemoteStoreGetSetDiscout48_user,
                (LPVOID *)&CashItemRemoteStoreGetSetDiscout48_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreGetSetDiscout48_wrapper),
                (LPVOID)cast_pointer_function((char(CashItemRemoteStore::*)(char))&CashItemRemoteStore::GetSetDiscout)
            },
            _hook_record {
                (LPVOID)0x1402fac70L,
                (LPVOID *)&CashItemRemoteStoreGet_CashEvent_Status50_user,
                (LPVOID *)&CashItemRemoteStoreGet_CashEvent_Status50_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreGet_CashEvent_Status50_wrapper),
                (LPVOID)cast_pointer_function((char(CashItemRemoteStore::*)(char))&CashItemRemoteStore::Get_CashEvent_Status)
            },
            _hook_record {
                (LPVOID)0x1402fc8a0L,
                (LPVOID *)&CashItemRemoteStoreGet_Conditional_Event_Name52_user,
                (LPVOID *)&CashItemRemoteStoreGet_Conditional_Event_Name52_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreGet_Conditional_Event_Name52_wrapper),
                (LPVOID)cast_pointer_function((void(CashItemRemoteStore::*)(char, char*))&CashItemRemoteStore::Get_Conditional_Event_Name)
            },
            _hook_record {
                (LPVOID)0x1402fc460L,
                (LPVOID *)&CashItemRemoteStoreGet_Conditional_Event_Status54_user,
                (LPVOID *)&CashItemRemoteStoreGet_Conditional_Event_Status54_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreGet_Conditional_Event_Status54_wrapper),
                (LPVOID)cast_pointer_function((char(CashItemRemoteStore::*)())&CashItemRemoteStore::Get_Conditional_Event_Status)
            },
            _hook_record {
                (LPVOID)0x1402f5220L,
                (LPVOID *)&CashItemRemoteStoreGoodsList56_user,
                (LPVOID *)&CashItemRemoteStoreGoodsList56_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreGoodsList56_wrapper),
                (LPVOID)cast_pointer_function((bool(CashItemRemoteStore::*)(uint16_t, char*))&CashItemRemoteStore::GoodsList)
            },
            _hook_record {
                (LPVOID)0x1403009c0L,
                (LPVOID *)&CashItemRemoteStoreGoodsListBuyByCash58_user,
                (LPVOID *)&CashItemRemoteStoreGoodsListBuyByCash58_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreGoodsListBuyByCash58_wrapper),
                (LPVOID)cast_pointer_function((bool(CashItemRemoteStore::*)(uint16_t, char*))&CashItemRemoteStore::GoodsListBuyByCash)
            },
            _hook_record {
                (LPVOID)0x140300c60L,
                (LPVOID *)&CashItemRemoteStoreGoodsListBuyByGold60_user,
                (LPVOID *)&CashItemRemoteStoreGoodsListBuyByGold60_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreGoodsListBuyByGold60_wrapper),
                (LPVOID)cast_pointer_function((bool(CashItemRemoteStore::*)(uint16_t, char*))&CashItemRemoteStore::GoodsListBuyByGold)
            },
            _hook_record {
                (LPVOID)0x1402fafc0L,
                (LPVOID *)&CashItemRemoteStoreInform_CashEvent62_user,
                (LPVOID *)&CashItemRemoteStoreInform_CashEvent62_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreInform_CashEvent62_wrapper),
                (LPVOID)cast_pointer_function((void(CashItemRemoteStore::*)(uint16_t))&CashItemRemoteStore::Inform_CashEvent)
            },
            _hook_record {
                (LPVOID)0x1402fadc0L,
                (LPVOID *)&CashItemRemoteStoreInform_CashEvent_Status_All64_user,
                (LPVOID *)&CashItemRemoteStoreInform_CashEvent_Status_All64_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreInform_CashEvent_Status_All64_wrapper),
                (LPVOID)cast_pointer_function((void(CashItemRemoteStore::*)(char, char, struct _cash_event_ini*))&CashItemRemoteStore::Inform_CashEvent_Status_All)
            },
            _hook_record {
                (LPVOID)0x1402fc970L,
                (LPVOID *)&CashItemRemoteStoreInform_ConditionalEvent66_user,
                (LPVOID *)&CashItemRemoteStoreInform_ConditionalEvent66_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreInform_ConditionalEvent66_wrapper),
                (LPVOID)cast_pointer_function((void(CashItemRemoteStore::*)(uint16_t))&CashItemRemoteStore::Inform_ConditionalEvent)
            },
            _hook_record {
                (LPVOID)0x1402fc640L,
                (LPVOID *)&CashItemRemoteStoreInform_ConditionalEvent_Status_All68_user,
                (LPVOID *)&CashItemRemoteStoreInform_ConditionalEvent_Status_All68_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreInform_ConditionalEvent_Status_All68_wrapper),
                (LPVOID)cast_pointer_function((void(CashItemRemoteStore::*)(char, char, char*))&CashItemRemoteStore::Inform_ConditionalEvent_Status_All)
            },
            _hook_record {
                (LPVOID)0x1402f4ef0L,
                (LPVOID *)&CashItemRemoteStoreInitialize70_user,
                (LPVOID *)&CashItemRemoteStoreInitialize70_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreInitialize70_wrapper),
                (LPVOID)cast_pointer_function((bool(CashItemRemoteStore::*)())&CashItemRemoteStore::Initialize)
            },
            _hook_record {
                (LPVOID)0x140079810L,
                (LPVOID *)&CashItemRemoteStoreInstance72_user,
                (LPVOID *)&CashItemRemoteStoreInstance72_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreInstance72_wrapper),
                (LPVOID)cast_pointer_function((struct CashItemRemoteStore*(*)())&CashItemRemoteStore::Instance)
            },
            _hook_record {
                (LPVOID)0x1400f0860L,
                (LPVOID *)&CashItemRemoteStoreIsBuyCashItemByGold74_user,
                (LPVOID *)&CashItemRemoteStoreIsBuyCashItemByGold74_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreIsBuyCashItemByGold74_wrapper),
                (LPVOID)cast_pointer_function((bool(CashItemRemoteStore::*)())&CashItemRemoteStore::IsBuyCashItemByGold)
            },
            _hook_record {
                (LPVOID)0x1402faca0L,
                (LPVOID *)&CashItemRemoteStoreIsEventTime76_user,
                (LPVOID *)&CashItemRemoteStoreIsEventTime76_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreIsEventTime76_wrapper),
                (LPVOID)cast_pointer_function((bool(CashItemRemoteStore::*)(char))&CashItemRemoteStore::IsEventTime)
            },
            _hook_record {
                (LPVOID)0x1402f57a0L,
                (LPVOID *)&CashItemRemoteStoreIsUsableCoupon78_user,
                (LPVOID *)&CashItemRemoteStoreIsUsableCoupon78_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreIsUsableCoupon78_wrapper),
                (LPVOID)cast_pointer_function((bool(CashItemRemoteStore::*)(struct _request_csi_buy_clzo*, struct _STORAGE_POS_INDIV, struct CPlayer*, bool*))&CashItemRemoteStore::IsUsableCoupon)
            },
            _hook_record {
                (LPVOID)0x1402fdd90L,
                (LPVOID *)&CashItemRemoteStoreLimitedSale_check_count80_user,
                (LPVOID *)&CashItemRemoteStoreLimitedSale_check_count80_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreLimitedSale_check_count80_wrapper),
                (LPVOID)cast_pointer_function((bool(CashItemRemoteStore::*)(char, unsigned int))&CashItemRemoteStore::LimitedSale_check_count)
            },
            _hook_record {
                (LPVOID)0x1402f4d90L,
                (LPVOID *)&CashItemRemoteStoreLoadBuyCashMode82_user,
                (LPVOID *)&CashItemRemoteStoreLoadBuyCashMode82_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreLoadBuyCashMode82_wrapper),
                (LPVOID)cast_pointer_function((bool(CashItemRemoteStore::*)())&CashItemRemoteStore::LoadBuyCashMode)
            },
            _hook_record {
                (LPVOID)0x1402f4c90L,
                (LPVOID *)&CashItemRemoteStoreLoadNationalPrice84_user,
                (LPVOID *)&CashItemRemoteStoreLoadNationalPrice84_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreLoadNationalPrice84_wrapper),
                (LPVOID)cast_pointer_function((bool(CashItemRemoteStore::*)(struct CRecordData*))&CashItemRemoteStore::LoadNationalPrice)
            },
            _hook_record {
                (LPVOID)0x1402f7f10L,
                (LPVOID *)&CashItemRemoteStoreLoad_Cash_Event86_user,
                (LPVOID *)&CashItemRemoteStoreLoad_Cash_Event86_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreLoad_Cash_Event86_wrapper),
                (LPVOID)cast_pointer_function((void(CashItemRemoteStore::*)())&CashItemRemoteStore::Load_Cash_Event)
            },
            _hook_record {
                (LPVOID)0x1402fc330L,
                (LPVOID *)&CashItemRemoteStoreLoad_Conditional_Event88_user,
                (LPVOID *)&CashItemRemoteStoreLoad_Conditional_Event88_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreLoad_Conditional_Event88_wrapper),
                (LPVOID)cast_pointer_function((void(CashItemRemoteStore::*)())&CashItemRemoteStore::Load_Conditional_Event)
            },
            _hook_record {
                (LPVOID)0x1402f99b0L,
                (LPVOID *)&CashItemRemoteStoreLoad_Event_INI90_user,
                (LPVOID *)&CashItemRemoteStoreLoad_Event_INI90_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreLoad_Event_INI90_wrapper),
                (LPVOID)cast_pointer_function((void(CashItemRemoteStore::*)(struct _cash_event_ini*, struct _FILETIME*, char*))&CashItemRemoteStore::Load_Event_INI)
            },
            _hook_record {
                (LPVOID)0x1402fd4a0L,
                (LPVOID *)&CashItemRemoteStoreLoad_LimitedSale_Event_INI92_user,
                (LPVOID *)&CashItemRemoteStoreLoad_LimitedSale_Event_INI92_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreLoad_LimitedSale_Event_INI92_wrapper),
                (LPVOID)cast_pointer_function((void(CashItemRemoteStore::*)(struct _cash_event_ini*, struct _FILETIME*, char*))&CashItemRemoteStore::Load_LimitedSale_Event_INI)
            },
            _hook_record {
                (LPVOID)0x1402f7e80L,
                (LPVOID *)&CashItemRemoteStoreLoop_Cash_Event94_user,
                (LPVOID *)&CashItemRemoteStoreLoop_Cash_Event94_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreLoop_Cash_Event94_wrapper),
                (LPVOID)cast_pointer_function((void(CashItemRemoteStore::*)())&CashItemRemoteStore::Loop_Cash_Event)
            },
            _hook_record {
                (LPVOID)0x1402fb620L,
                (LPVOID *)&CashItemRemoteStoreLoop_Check_Total_Selling96_user,
                (LPVOID *)&CashItemRemoteStoreLoop_Check_Total_Selling96_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreLoop_Check_Total_Selling96_wrapper),
                (LPVOID)cast_pointer_function((void(CashItemRemoteStore::*)())&CashItemRemoteStore::Loop_Check_Total_Selling)
            },
            _hook_record {
                (LPVOID)0x1402fb5d0L,
                (LPVOID *)&CashItemRemoteStoreLoop_ContEvent98_user,
                (LPVOID *)&CashItemRemoteStoreLoop_ContEvent98_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreLoop_ContEvent98_wrapper),
                (LPVOID)cast_pointer_function((void(CashItemRemoteStore::*)())&CashItemRemoteStore::Loop_ContEvent)
            },
            _hook_record {
                (LPVOID)0x1402fb560L,
                (LPVOID *)&CashItemRemoteStoreLoop_TatalCashEvent100_user,
                (LPVOID *)&CashItemRemoteStoreLoop_TatalCashEvent100_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreLoop_TatalCashEvent100_wrapper),
                (LPVOID)cast_pointer_function((void(CashItemRemoteStore::*)())&CashItemRemoteStore::Loop_TatalCashEvent)
            },
            _hook_record {
                (LPVOID)0x1402f5cb0L,
                (LPVOID *)&CashItemRemoteStoreSell102_user,
                (LPVOID *)&CashItemRemoteStoreSell102_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreSell102_wrapper),
                (LPVOID)cast_pointer_function((bool(CashItemRemoteStore::*)(uint16_t, char*))&CashItemRemoteStore::Sell)
            },
            _hook_record {
                (LPVOID)0x1402f7900L,
                (LPVOID *)&CashItemRemoteStoreSetNextDiscountEventTime104_user,
                (LPVOID *)&CashItemRemoteStoreSetNextDiscountEventTime104_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreSetNextDiscountEventTime104_wrapper),
                (LPVOID)cast_pointer_function((bool(CashItemRemoteStore::*)())&CashItemRemoteStore::SetNextDiscountEventTime)
            },
            _hook_record {
                (LPVOID)0x1402fcd30L,
                (LPVOID *)&CashItemRemoteStoreSetNextEventTime106_user,
                (LPVOID *)&CashItemRemoteStoreSetNextEventTime106_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreSetNextEventTime106_wrapper),
                (LPVOID)cast_pointer_function((bool(CashItemRemoteStore::*)(char))&CashItemRemoteStore::SetNextEventTime)
            },
            _hook_record {
                (LPVOID)0x1402fab90L,
                (LPVOID *)&CashItemRemoteStoreSet_CashEvent_Status108_user,
                (LPVOID *)&CashItemRemoteStoreSet_CashEvent_Status108_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreSet_CashEvent_Status108_wrapper),
                (LPVOID)cast_pointer_function((void(CashItemRemoteStore::*)(char, char))&CashItemRemoteStore::Set_CashEvent_Status)
            },
            _hook_record {
                (LPVOID)0x1402fc3e0L,
                (LPVOID *)&CashItemRemoteStoreSet_Conditional_Evnet_Status110_user,
                (LPVOID *)&CashItemRemoteStoreSet_Conditional_Evnet_Status110_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreSet_Conditional_Evnet_Status110_wrapper),
                (LPVOID)cast_pointer_function((void(CashItemRemoteStore::*)(char))&CashItemRemoteStore::Set_Conditional_Evnet_Status)
            },
            _hook_record {
                (LPVOID)0x1402fdad0L,
                (LPVOID *)&CashItemRemoteStoreSet_DB_LimitedSale_Event112_user,
                (LPVOID *)&CashItemRemoteStoreSet_DB_LimitedSale_Event112_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreSet_DB_LimitedSale_Event112_wrapper),
                (LPVOID)cast_pointer_function((void(CashItemRemoteStore::*)())&CashItemRemoteStore::Set_DB_LimitedSale_Event)
            },
            _hook_record {
                (LPVOID)0x1402fde70L,
                (LPVOID *)&CashItemRemoteStoreSet_FROMDB_LimitedSale_Event114_user,
                (LPVOID *)&CashItemRemoteStoreSet_FROMDB_LimitedSale_Event114_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreSet_FROMDB_LimitedSale_Event114_wrapper),
                (LPVOID)cast_pointer_function((void(CashItemRemoteStore::*)(struct _db_cash_limited_sale*))&CashItemRemoteStore::Set_FROMDB_LimitedSale_Event)
            },
            _hook_record {
                (LPVOID)0x1402fd750L,
                (LPVOID *)&CashItemRemoteStoreSet_LimitedSale_DCK116_user,
                (LPVOID *)&CashItemRemoteStoreSet_LimitedSale_DCK116_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreSet_LimitedSale_DCK116_wrapper),
                (LPVOID)cast_pointer_function((void(CashItemRemoteStore::*)(char, char))&CashItemRemoteStore::Set_LimitedSale_DCK)
            },
            _hook_record {
                (LPVOID)0x1402fdfd0L,
                (LPVOID *)&CashItemRemoteStoreSet_LimitedSale_Event118_user,
                (LPVOID *)&CashItemRemoteStoreSet_LimitedSale_Event118_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreSet_LimitedSale_Event118_wrapper),
                (LPVOID)cast_pointer_function((void(CashItemRemoteStore::*)())&CashItemRemoteStore::Set_LimitedSale_Event)
            },
            _hook_record {
                (LPVOID)0x1402fd780L,
                (LPVOID *)&CashItemRemoteStoreSet_LimitedSale_Event_Ini120_user,
                (LPVOID *)&CashItemRemoteStoreSet_LimitedSale_Event_Ini120_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreSet_LimitedSale_Event_Ini120_wrapper),
                (LPVOID)cast_pointer_function((void(CashItemRemoteStore::*)(struct _cash_event_ini*))&CashItemRemoteStore::Set_LimitedSale_Event_Ini)
            },
            _hook_record {
                (LPVOID)0x1402fda00L,
                (LPVOID *)&CashItemRemoteStoreSet_LimitedSale_count122_user,
                (LPVOID *)&CashItemRemoteStoreSet_LimitedSale_count122_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreSet_LimitedSale_count122_wrapper),
                (LPVOID)cast_pointer_function((void(CashItemRemoteStore::*)(char, unsigned int))&CashItemRemoteStore::Set_LimitedSale_count)
            },
            _hook_record {
                (LPVOID)0x1402f8c40L,
                (LPVOID *)&CashItemRemoteStoreUpdate_INI124_user,
                (LPVOID *)&CashItemRemoteStoreUpdate_INI124_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreUpdate_INI124_wrapper),
                (LPVOID)cast_pointer_function((void(CashItemRemoteStore::*)(struct _cash_event_ini*, char))&CashItemRemoteStore::Update_INI)
            },
            _hook_record {
                (LPVOID)0x1402f54b0L,
                (LPVOID *)&CashItemRemoteStoreUseDiscountCoupon126_user,
                (LPVOID *)&CashItemRemoteStoreUseDiscountCoupon126_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreUseDiscountCoupon126_wrapper),
                (LPVOID)cast_pointer_function((bool(CashItemRemoteStore::*)(struct _param_cash_update*, struct _STORAGE_POS_INDIV, struct CPlayer*))&CashItemRemoteStore::UseDiscountCoupon)
            },
            _hook_record {
                (LPVOID)0x1402f3cf0L,
                (LPVOID *)&CashItemRemoteStore_InitLoggers128_user,
                (LPVOID *)&CashItemRemoteStore_InitLoggers128_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStore_InitLoggers128_wrapper),
                (LPVOID)cast_pointer_function((bool(CashItemRemoteStore::*)())&CashItemRemoteStore::_InitLoggers)
            },
            _hook_record {
                (LPVOID)0x1402f4650L,
                (LPVOID *)&CashItemRemoteStore_MakeLinkTable130_user,
                (LPVOID *)&CashItemRemoteStore_MakeLinkTable130_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStore_MakeLinkTable130_wrapper),
                (LPVOID)cast_pointer_function((bool(CashItemRemoteStore::*)(char*, int))&CashItemRemoteStore::_MakeLinkTable)
            },
            _hook_record {
                (LPVOID)0x1402f4a90L,
                (LPVOID *)&CashItemRemoteStore_ReadGoods132_user,
                (LPVOID *)&CashItemRemoteStore_ReadGoods132_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStore_ReadGoods132_wrapper),
                (LPVOID)cast_pointer_function((bool(CashItemRemoteStore::*)())&CashItemRemoteStore::_ReadGoods)
            },
            _hook_record {
                (LPVOID)0x1402f4150L,
                (LPVOID *)&CashItemRemoteStore__CheckGoods134_user,
                (LPVOID *)&CashItemRemoteStore__CheckGoods134_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStore__CheckGoods134_wrapper),
                (LPVOID)cast_pointer_function((bool(CashItemRemoteStore::*)(struct CRecordData*))&CashItemRemoteStore::__CheckGoods)
            },
            _hook_record {
                (LPVOID)0x1402ff340L,
                (LPVOID *)&CashItemRemoteStore_buybygold_buy_single_item136_user,
                (LPVOID *)&CashItemRemoteStore_buybygold_buy_single_item136_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStore_buybygold_buy_single_item136_wrapper),
                (LPVOID)cast_pointer_function((CS_RCODE(CashItemRemoteStore::*)(struct CPlayer*, struct _request_csi_buy_clzo*, struct _request_csi_buy_clzo::__item*, struct _param_cashitem_dblog*, bool*, struct _result_csi_buy_zocl*))&CashItemRemoteStore::_buybygold_buy_single_item)
            },
            _hook_record {
                (LPVOID)0x140300110L,
                (LPVOID *)&CashItemRemoteStore_buybygold_buy_single_item_additional_process138_user,
                (LPVOID *)&CashItemRemoteStore_buybygold_buy_single_item_additional_process138_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStore_buybygold_buy_single_item_additional_process138_wrapper),
                (LPVOID)cast_pointer_function((CS_RCODE(CashItemRemoteStore::*)(struct CPlayer*, struct _request_csi_buy_clzo::__item*, struct _param_cashitem_dblog*, struct _result_csi_buy_zocl*))&CashItemRemoteStore::_buybygold_buy_single_item_additional_process)
            },
            _hook_record {
                (LPVOID)0x1402ff8a0L,
                (LPVOID *)&CashItemRemoteStore_buybygold_buy_single_item_calc_price140_user,
                (LPVOID *)&CashItemRemoteStore_buybygold_buy_single_item_calc_price140_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStore_buybygold_buy_single_item_calc_price140_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(CashItemRemoteStore::*)(struct CPlayer*, struct _request_csi_buy_clzo*, struct _request_csi_buy_clzo::__item*, struct _param_cashitem_dblog*, struct _CashShop_fld*, bool*, struct _result_csi_buy_zocl*, unsigned int*))&CashItemRemoteStore::_buybygold_buy_single_item_calc_price)
            },
            _hook_record {
                (LPVOID)0x1402ffa70L,
                (LPVOID *)&CashItemRemoteStore_buybygold_buy_single_item_calc_price_coupon142_user,
                (LPVOID *)&CashItemRemoteStore_buybygold_buy_single_item_calc_price_coupon142_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStore_buybygold_buy_single_item_calc_price_coupon142_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(CashItemRemoteStore::*)(struct CPlayer*, struct _request_csi_buy_clzo*, char, int, bool*, unsigned int*))&CashItemRemoteStore::_buybygold_buy_single_item_calc_price_coupon)
            },
            _hook_record {
                (LPVOID)0x1402ffce0L,
                (LPVOID *)&CashItemRemoteStore_buybygold_buy_single_item_calc_price_discount144_user,
                (LPVOID *)&CashItemRemoteStore_buybygold_buy_single_item_calc_price_discount144_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStore_buybygold_buy_single_item_calc_price_discount144_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(CashItemRemoteStore::*)(struct _CashShop_fld*, char))&CashItemRemoteStore::_buybygold_buy_single_item_calc_price_discount)
            },
            _hook_record {
                (LPVOID)0x1402ffe60L,
                (LPVOID *)&CashItemRemoteStore_buybygold_buy_single_item_calc_price_limitsale146_user,
                (LPVOID *)&CashItemRemoteStore_buybygold_buy_single_item_calc_price_limitsale146_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStore_buybygold_buy_single_item_calc_price_limitsale146_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(CashItemRemoteStore::*)(int, char))&CashItemRemoteStore::_buybygold_buy_single_item_calc_price_limitsale)
            },
            _hook_record {
                (LPVOID)0x1402ffdb0L,
                (LPVOID *)&CashItemRemoteStore_buybygold_buy_single_item_calc_price_one_n_one148_user,
                (LPVOID *)&CashItemRemoteStore_buybygold_buy_single_item_calc_price_one_n_one148_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStore_buybygold_buy_single_item_calc_price_one_n_one148_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(CashItemRemoteStore::*)(char, int, char))&CashItemRemoteStore::_buybygold_buy_single_item_calc_price_one_n_one)
            },
            _hook_record {
                (LPVOID)0x1402ff5c0L,
                (LPVOID *)&CashItemRemoteStore_buybygold_buy_single_item_check_item150_user,
                (LPVOID *)&CashItemRemoteStore_buybygold_buy_single_item_check_item150_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStore_buybygold_buy_single_item_check_item150_wrapper),
                (LPVOID)cast_pointer_function((CS_RCODE(CashItemRemoteStore::*)(struct CPlayer*, struct _request_csi_buy_clzo::__item*, struct _param_cashitem_dblog*, struct _CashShop_fld**))&CashItemRemoteStore::_buybygold_buy_single_item_check_item)
            },
            _hook_record {
                (LPVOID)0x1402ffef0L,
                (LPVOID *)&CashItemRemoteStore_buybygold_buy_single_item_give_item152_user,
                (LPVOID *)&CashItemRemoteStore_buybygold_buy_single_item_give_item152_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStore_buybygold_buy_single_item_give_item152_wrapper),
                (LPVOID)cast_pointer_function((CS_RCODE(CashItemRemoteStore::*)(struct CPlayer*, struct _request_csi_buy_clzo::__item*, struct _STORAGE_LIST::_db_con*))&CashItemRemoteStore::_buybygold_buy_single_item_give_item)
            },
            _hook_record {
                (LPVOID)0x1403004c0L,
                (LPVOID *)&CashItemRemoteStore_buybygold_buy_single_item_proc_complete154_user,
                (LPVOID *)&CashItemRemoteStore_buybygold_buy_single_item_proc_complete154_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStore_buybygold_buy_single_item_proc_complete154_wrapper),
                (LPVOID)cast_pointer_function((void(CashItemRemoteStore::*)(struct CPlayer*, struct _request_csi_buy_clzo::__item*, struct _param_cashitem_dblog*, struct _CashShop_fld*, struct _STORAGE_LIST::_db_con*, struct _result_csi_buy_zocl*, unsigned int, unsigned int, bool*, bool*))&CashItemRemoteStore::_buybygold_buy_single_item_proc_complete)
            },
            _hook_record {
                (LPVOID)0x1402ff7c0L,
                (LPVOID *)&CashItemRemoteStore_buybygold_buy_single_item_proc_price156_user,
                (LPVOID *)&CashItemRemoteStore_buybygold_buy_single_item_proc_price156_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStore_buybygold_buy_single_item_proc_price156_wrapper),
                (LPVOID)cast_pointer_function((CS_RCODE(CashItemRemoteStore::*)(struct CPlayer*, struct _request_csi_buy_clzo*, struct _request_csi_buy_clzo::__item*, struct _param_cashitem_dblog*, struct _CashShop_fld*, bool*, struct _result_csi_buy_zocl*, unsigned int*, unsigned int*))&CashItemRemoteStore::_buybygold_buy_single_item_proc_price)
            },
            _hook_record {
                (LPVOID)0x140300760L,
                (LPVOID *)&CashItemRemoteStore_buybygold_buy_single_item_setbuydblog158_user,
                (LPVOID *)&CashItemRemoteStore_buybygold_buy_single_item_setbuydblog158_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStore_buybygold_buy_single_item_setbuydblog158_wrapper),
                (LPVOID)cast_pointer_function((void(CashItemRemoteStore::*)(struct _param_cashitem_dblog*, struct _STORAGE_LIST::_db_con*, unsigned int, unsigned int))&CashItemRemoteStore::_buybygold_buy_single_item_setbuydblog)
            },
            _hook_record {
                (LPVOID)0x140300650L,
                (LPVOID *)&CashItemRemoteStore_buybygold_buy_single_item_setsenddata160_user,
                (LPVOID *)&CashItemRemoteStore_buybygold_buy_single_item_setsenddata160_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStore_buybygold_buy_single_item_setsenddata160_wrapper),
                (LPVOID)cast_pointer_function((void(CashItemRemoteStore::*)(struct _STORAGE_LIST::_db_con*, struct _result_csi_buy_zocl*))&CashItemRemoteStore::_buybygold_buy_single_item_setsenddata)
            },
            _hook_record {
                (LPVOID)0x1402ff190L,
                (LPVOID *)&CashItemRemoteStore_buybygold_check_coupon162_user,
                (LPVOID *)&CashItemRemoteStore_buybygold_check_coupon162_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStore_buybygold_check_coupon162_wrapper),
                (LPVOID)cast_pointer_function((CS_RCODE(CashItemRemoteStore::*)(struct CPlayer*, struct _request_csi_buy_clzo*, struct _param_cashitem_dblog*))&CashItemRemoteStore::_buybygold_check_coupon)
            },
            _hook_record {
                (LPVOID)0x1402fefa0L,
                (LPVOID *)&CashItemRemoteStore_buybygold_check_valid164_user,
                (LPVOID *)&CashItemRemoteStore_buybygold_check_valid164_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStore_buybygold_check_valid164_wrapper),
                (LPVOID)cast_pointer_function((CS_RCODE(CashItemRemoteStore::*)(struct CPlayer*, struct _request_csi_buy_clzo*, struct _param_cashitem_dblog*))&CashItemRemoteStore::_buybygold_check_valid)
            },
            _hook_record {
                (LPVOID)0x140300840L,
                (LPVOID *)&CashItemRemoteStore_buybygold_complete166_user,
                (LPVOID *)&CashItemRemoteStore_buybygold_complete166_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStore_buybygold_complete166_wrapper),
                (LPVOID)cast_pointer_function((void(CashItemRemoteStore::*)(struct CPlayer*, struct _result_csi_buy_zocl*, struct _request_csi_buy_clzo*, struct _request_csi_buy_clzo::__item*, struct _param_cashitem_dblog*, bool))&CashItemRemoteStore::_buybygold_complete)
            },
            _hook_record {
                (LPVOID)0x1402ff0e0L,
                (LPVOID *)&CashItemRemoteStore_buybygold_set_cashitem_dblog_sheet168_user,
                (LPVOID *)&CashItemRemoteStore_buybygold_set_cashitem_dblog_sheet168_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStore_buybygold_set_cashitem_dblog_sheet168_wrapper),
                (LPVOID)cast_pointer_function((void(CashItemRemoteStore::*)(struct CPlayer*, struct _param_cashitem_dblog*))&CashItemRemoteStore::_buybygold_set_cashitem_dblog_sheet)
            },
            _hook_record {
                (LPVOID)0x1402f4fa0L,
                (LPVOID *)&CashItemRemoteStore_check_buyitem170_user,
                (LPVOID *)&CashItemRemoteStore_check_buyitem170_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStore_check_buyitem170_wrapper),
                (LPVOID)cast_pointer_function((CS_RCODE(CashItemRemoteStore::*)(char, struct _request_csi_buy_clzo::__item*, struct _CashShop_fld*))&CashItemRemoteStore::_check_buyitem)
            },
            _hook_record {
                (LPVOID)0x1402f6970L,
                (LPVOID *)&CashItemRemoteStorecheck_cash_discount_ini172_user,
                (LPVOID *)&CashItemRemoteStorecheck_cash_discount_ini172_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStorecheck_cash_discount_ini172_wrapper),
                (LPVOID)cast_pointer_function((void(CashItemRemoteStore::*)())&CashItemRemoteStore::check_cash_discount_ini)
            },
            _hook_record {
                (LPVOID)0x1402f6c30L,
                (LPVOID *)&CashItemRemoteStorecheck_cash_discount_status174_user,
                (LPVOID *)&CashItemRemoteStorecheck_cash_discount_status174_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStorecheck_cash_discount_status174_wrapper),
                (LPVOID)cast_pointer_function((void(CashItemRemoteStore::*)())&CashItemRemoteStore::check_cash_discount_status)
            },
            _hook_record {
                (LPVOID)0x1402f5f30L,
                (LPVOID *)&CashItemRemoteStorecheck_loaded_cde_status176_user,
                (LPVOID *)&CashItemRemoteStorecheck_loaded_cde_status176_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStorecheck_loaded_cde_status176_wrapper),
                (LPVOID)cast_pointer_function((void(CashItemRemoteStore::*)())&CashItemRemoteStore::check_loaded_cde_status)
            },
            _hook_record {
                (LPVOID)0x1402f7850L,
                (LPVOID *)&CashItemRemoteStoreforce_endup_cash_discount_event178_user,
                (LPVOID *)&CashItemRemoteStoreforce_endup_cash_discount_event178_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreforce_endup_cash_discount_event178_wrapper),
                (LPVOID)cast_pointer_function((void(CashItemRemoteStore::*)())&CashItemRemoteStore::force_endup_cash_discount_event)
            },
            _hook_record {
                (LPVOID)0x1402f7380L,
                (LPVOID *)&CashItemRemoteStoreget_cde_status180_user,
                (LPVOID *)&CashItemRemoteStoreget_cde_status180_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreget_cde_status180_wrapper),
                (LPVOID)cast_pointer_function((char(CashItemRemoteStore::*)())&CashItemRemoteStore::get_cde_status)
            },
            _hook_record {
                (LPVOID)0x1402f6f60L,
                (LPVOID *)&CashItemRemoteStoreinform_cashdiscount_event182_user,
                (LPVOID *)&CashItemRemoteStoreinform_cashdiscount_event182_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreinform_cashdiscount_event182_wrapper),
                (LPVOID)cast_pointer_function((void(CashItemRemoteStore::*)(uint16_t))&CashItemRemoteStore::inform_cashdiscount_event)
            },
            _hook_record {
                (LPVOID)0x1402f6fc0L,
                (LPVOID *)&CashItemRemoteStoreinform_cashdiscount_status_all184_user,
                (LPVOID *)&CashItemRemoteStoreinform_cashdiscount_status_all184_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreinform_cashdiscount_status_all184_wrapper),
                (LPVOID)cast_pointer_function((void(CashItemRemoteStore::*)(char, struct _cash_discount_ini_*))&CashItemRemoteStore::inform_cashdiscount_status_all)
            },
            _hook_record {
                (LPVOID)0x1402fbb80L,
                (LPVOID *)&CashItemRemoteStoreisConEventTime186_user,
                (LPVOID *)&CashItemRemoteStoreisConEventTime186_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreisConEventTime186_wrapper),
                (LPVOID)cast_pointer_function((bool(CashItemRemoteStore::*)())&CashItemRemoteStore::isConEventTime)
            },
            _hook_record {
                (LPVOID)0x1402f7070L,
                (LPVOID *)&CashItemRemoteStoreis_cde_time188_user,
                (LPVOID *)&CashItemRemoteStoreis_cde_time188_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreis_cde_time188_wrapper),
                (LPVOID)cast_pointer_function((bool(CashItemRemoteStore::*)())&CashItemRemoteStore::is_cde_time)
            },
            _hook_record {
                (LPVOID)0x1402f5e30L,
                (LPVOID *)&CashItemRemoteStoreload_cash_discount_event190_user,
                (LPVOID *)&CashItemRemoteStoreload_cash_discount_event190_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreload_cash_discount_event190_wrapper),
                (LPVOID)cast_pointer_function((void(CashItemRemoteStore::*)())&CashItemRemoteStore::load_cash_discount_event)
            },
            _hook_record {
                (LPVOID)0x1402f60c0L,
                (LPVOID *)&CashItemRemoteStoreload_cde_ini192_user,
                (LPVOID *)&CashItemRemoteStoreload_cde_ini192_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreload_cde_ini192_wrapper),
                (LPVOID)cast_pointer_function((void(CashItemRemoteStore::*)(struct _cash_discount_ini_*, struct _FILETIME*))&CashItemRemoteStore::load_cde_ini)
            },
            _hook_record {
                (LPVOID)0x1402fbc10L,
                (LPVOID *)&CashItemRemoteStoreload_con_event_ini194_user,
                (LPVOID *)&CashItemRemoteStoreload_con_event_ini194_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreload_con_event_ini194_wrapper),
                (LPVOID)cast_pointer_function((void(CashItemRemoteStore::*)(struct _con_event_ini*, struct _FILETIME*))&CashItemRemoteStore::load_con_event_ini)
            },
            _hook_record {
                (LPVOID)0x1402f73a0L,
                (LPVOID *)&CashItemRemoteStorelog_about_cash_event196_user,
                (LPVOID *)&CashItemRemoteStorelog_about_cash_event196_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStorelog_about_cash_event196_wrapper),
                (LPVOID)cast_pointer_function((void(CashItemRemoteStore::*)(char*, struct _cash_discount_ini_*))&CashItemRemoteStore::log_about_cash_event)
            },
            _hook_record {
                (LPVOID)0x1402f6920L,
                (LPVOID *)&CashItemRemoteStoreloop_cash_discount_event198_user,
                (LPVOID *)&CashItemRemoteStoreloop_cash_discount_event198_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreloop_cash_discount_event198_wrapper),
                (LPVOID)cast_pointer_function((void(CashItemRemoteStore::*)())&CashItemRemoteStore::loop_cash_discount_event)
            },
            _hook_record {
                (LPVOID)0x1402f72d0L,
                (LPVOID *)&CashItemRemoteStoreset_cde_status200_user,
                (LPVOID *)&CashItemRemoteStoreset_cde_status200_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreset_cde_status200_wrapper),
                (LPVOID)cast_pointer_function((void(CashItemRemoteStore::*)(char))&CashItemRemoteStore::set_cde_status)
            },
            _hook_record {
                (LPVOID)0x1402fb0d0L,
                (LPVOID *)&CashItemRemoteStorestart_cashevent202_user,
                (LPVOID *)&CashItemRemoteStorestart_cashevent202_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStorestart_cashevent202_wrapper),
                (LPVOID)cast_pointer_function((bool(CashItemRemoteStore::*)(int, int, int, int, char))&CashItemRemoteStore::start_cashevent)
            },
            _hook_record {
                (LPVOID)0x1402f7590L,
                (LPVOID *)&CashItemRemoteStorestart_cde204_user,
                (LPVOID *)&CashItemRemoteStorestart_cde204_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStorestart_cde204_wrapper),
                (LPVOID)cast_pointer_function((bool(CashItemRemoteStore::*)(int, int, int, int))&CashItemRemoteStore::start_cde)
            },
            _hook_record {
                (LPVOID)0x1402fcae0L,
                (LPVOID *)&CashItemRemoteStorestart_conevent206_user,
                (LPVOID *)&CashItemRemoteStorestart_conevent206_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStorestart_conevent206_wrapper),
                (LPVOID)cast_pointer_function((bool(CashItemRemoteStore::*)(int, int, char))&CashItemRemoteStore::start_conevent)
            },
            _hook_record {
                (LPVOID)0x1402f7160L,
                (LPVOID *)&CashItemRemoteStoreupdate_ini208_user,
                (LPVOID *)&CashItemRemoteStoreupdate_ini208_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoreupdate_ini208_wrapper),
                (LPVOID)cast_pointer_function((void(CashItemRemoteStore::*)(struct _cash_discount_ini_*))&CashItemRemoteStore::update_ini)
            },
            _hook_record {
                (LPVOID)0x1402f3a90L,
                (LPVOID *)&CashItemRemoteStoredtor_CashItemRemoteStore210_user,
                (LPVOID *)&CashItemRemoteStoredtor_CashItemRemoteStore210_next,
                (LPVOID)cast_pointer_function(CashItemRemoteStoredtor_CashItemRemoteStore210_wrapper),
                (LPVOID)cast_pointer_function((void(CashItemRemoteStore::*)())&CashItemRemoteStore::dtor_CashItemRemoteStore)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
