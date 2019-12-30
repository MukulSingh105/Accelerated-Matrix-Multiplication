// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _matrixmul_HH_
#define _matrixmul_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "matrixmul_mac_mulbkb.h"

namespace ap_rtl {

struct matrixmul : public sc_module {
    // Port declarations 16
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<4> > a_address0;
    sc_out< sc_logic > a_ce0;
    sc_in< sc_lv<8> > a_q0;
    sc_out< sc_lv<4> > b_address0;
    sc_out< sc_logic > b_ce0;
    sc_in< sc_lv<8> > b_q0;
    sc_out< sc_lv<4> > res_address0;
    sc_out< sc_logic > res_ce0;
    sc_out< sc_logic > res_we0;
    sc_out< sc_lv<16> > res_d0;


    // Module declarations
    matrixmul(sc_module_name name);
    SC_HAS_PROCESS(matrixmul);

    ~matrixmul();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    matrixmul_mac_mulbkb<1,1,8,8,16,16>* matrixmul_mac_mulbkb_U1;
    sc_signal< sc_lv<6> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<2> > i_fu_130_p2;
    sc_signal< sc_lv<2> > i_reg_255;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<5> > sub_ln15_fu_152_p2;
    sc_signal< sc_lv<5> > sub_ln15_reg_260;
    sc_signal< sc_lv<1> > icmp_ln9_fu_124_p2;
    sc_signal< sc_lv<2> > j_fu_164_p2;
    sc_signal< sc_lv<2> > j_reg_269;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<5> > zext_ln13_fu_170_p1;
    sc_signal< sc_lv<5> > zext_ln13_reg_274;
    sc_signal< sc_lv<1> > icmp_ln11_fu_158_p2;
    sc_signal< sc_lv<4> > res_addr_reg_279;
    sc_signal< sc_lv<2> > k_fu_190_p2;
    sc_signal< sc_lv<2> > k_reg_287;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<1> > icmp_ln14_fu_184_p2;
    sc_signal< sc_lv<8> > a_load_reg_302;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<8> > b_load_reg_307;
    sc_signal< sc_lv<16> > grp_fu_244_p3;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<2> > i_0_reg_78;
    sc_signal< sc_lv<2> > j_0_reg_89;
    sc_signal< sc_lv<16> > res_load_reg_100;
    sc_signal< sc_lv<2> > k_0_reg_113;
    sc_signal< sc_lv<64> > sext_ln13_fu_179_p1;
    sc_signal< sc_lv<64> > sext_ln15_2_fu_205_p1;
    sc_signal< sc_lv<64> > sext_ln15_3_fu_233_p1;
    sc_signal< sc_lv<4> > tmp_2_fu_140_p3;
    sc_signal< sc_lv<5> > zext_ln15_1_fu_148_p1;
    sc_signal< sc_lv<5> > zext_ln15_fu_136_p1;
    sc_signal< sc_lv<5> > add_ln13_fu_174_p2;
    sc_signal< sc_lv<5> > zext_ln15_2_fu_196_p1;
    sc_signal< sc_lv<5> > add_ln15_1_fu_200_p2;
    sc_signal< sc_lv<4> > tmp_3_fu_210_p3;
    sc_signal< sc_lv<5> > zext_ln15_3_fu_218_p1;
    sc_signal< sc_lv<5> > sub_ln15_1_fu_222_p2;
    sc_signal< sc_lv<5> > add_ln15_2_fu_228_p2;
    sc_signal< sc_lv<6> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<6> ap_ST_fsm_state1;
    static const sc_lv<6> ap_ST_fsm_state2;
    static const sc_lv<6> ap_ST_fsm_state3;
    static const sc_lv<6> ap_ST_fsm_state4;
    static const sc_lv<6> ap_ST_fsm_state5;
    static const sc_lv<6> ap_ST_fsm_state6;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<16> ap_const_lv16_0;
    static const sc_lv<2> ap_const_lv2_3;
    static const sc_lv<2> ap_const_lv2_1;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_a_address0();
    void thread_a_ce0();
    void thread_add_ln13_fu_174_p2();
    void thread_add_ln15_1_fu_200_p2();
    void thread_add_ln15_2_fu_228_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_b_address0();
    void thread_b_ce0();
    void thread_i_fu_130_p2();
    void thread_icmp_ln11_fu_158_p2();
    void thread_icmp_ln14_fu_184_p2();
    void thread_icmp_ln9_fu_124_p2();
    void thread_j_fu_164_p2();
    void thread_k_fu_190_p2();
    void thread_res_address0();
    void thread_res_ce0();
    void thread_res_d0();
    void thread_res_we0();
    void thread_sext_ln13_fu_179_p1();
    void thread_sext_ln15_2_fu_205_p1();
    void thread_sext_ln15_3_fu_233_p1();
    void thread_sub_ln15_1_fu_222_p2();
    void thread_sub_ln15_fu_152_p2();
    void thread_tmp_2_fu_140_p3();
    void thread_tmp_3_fu_210_p3();
    void thread_zext_ln13_fu_170_p1();
    void thread_zext_ln15_1_fu_148_p1();
    void thread_zext_ln15_2_fu_196_p1();
    void thread_zext_ln15_3_fu_218_p1();
    void thread_zext_ln15_fu_136_p1();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
