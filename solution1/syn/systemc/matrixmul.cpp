// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "matrixmul.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic matrixmul::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic matrixmul::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<6> matrixmul::ap_ST_fsm_state1 = "1";
const sc_lv<6> matrixmul::ap_ST_fsm_state2 = "10";
const sc_lv<6> matrixmul::ap_ST_fsm_state3 = "100";
const sc_lv<6> matrixmul::ap_ST_fsm_state4 = "1000";
const sc_lv<6> matrixmul::ap_ST_fsm_state5 = "10000";
const sc_lv<6> matrixmul::ap_ST_fsm_state6 = "100000";
const sc_lv<32> matrixmul::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> matrixmul::ap_const_lv32_1 = "1";
const sc_lv<1> matrixmul::ap_const_lv1_0 = "0";
const sc_lv<32> matrixmul::ap_const_lv32_2 = "10";
const sc_lv<32> matrixmul::ap_const_lv32_3 = "11";
const sc_lv<32> matrixmul::ap_const_lv32_4 = "100";
const sc_lv<32> matrixmul::ap_const_lv32_5 = "101";
const sc_lv<2> matrixmul::ap_const_lv2_0 = "00";
const sc_lv<1> matrixmul::ap_const_lv1_1 = "1";
const sc_lv<16> matrixmul::ap_const_lv16_0 = "0000000000000000";
const sc_lv<2> matrixmul::ap_const_lv2_3 = "11";
const sc_lv<2> matrixmul::ap_const_lv2_1 = "1";
const bool matrixmul::ap_const_boolean_1 = true;

matrixmul::matrixmul(sc_module_name name) : sc_module(name), mVcdFile(0) {
    matrixmul_mac_mulbkb_U1 = new matrixmul_mac_mulbkb<1,1,8,8,16,16>("matrixmul_mac_mulbkb_U1");
    matrixmul_mac_mulbkb_U1->din0(b_load_reg_307);
    matrixmul_mac_mulbkb_U1->din1(a_load_reg_302);
    matrixmul_mac_mulbkb_U1->din2(res_load_reg_100);
    matrixmul_mac_mulbkb_U1->dout(grp_fu_244_p3);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_a_address0);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( sext_ln15_2_fu_205_p1 );

    SC_METHOD(thread_a_ce0);
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_add_ln13_fu_174_p2);
    sensitive << ( sub_ln15_reg_260 );
    sensitive << ( zext_ln13_fu_170_p1 );

    SC_METHOD(thread_add_ln15_1_fu_200_p2);
    sensitive << ( sub_ln15_reg_260 );
    sensitive << ( zext_ln15_2_fu_196_p1 );

    SC_METHOD(thread_add_ln15_2_fu_228_p2);
    sensitive << ( zext_ln13_reg_274 );
    sensitive << ( sub_ln15_1_fu_222_p2 );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state4);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state5);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state6);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln9_fu_124_p2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln9_fu_124_p2 );

    SC_METHOD(thread_b_address0);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( sext_ln15_3_fu_233_p1 );

    SC_METHOD(thread_b_ce0);
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_i_fu_130_p2);
    sensitive << ( i_0_reg_78 );

    SC_METHOD(thread_icmp_ln11_fu_158_p2);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( j_0_reg_89 );

    SC_METHOD(thread_icmp_ln14_fu_184_p2);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( k_0_reg_113 );

    SC_METHOD(thread_icmp_ln9_fu_124_p2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( i_0_reg_78 );

    SC_METHOD(thread_j_fu_164_p2);
    sensitive << ( j_0_reg_89 );

    SC_METHOD(thread_k_fu_190_p2);
    sensitive << ( k_0_reg_113 );

    SC_METHOD(thread_res_address0);
    sensitive << ( res_addr_reg_279 );
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_res_ce0);
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_res_d0);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( res_load_reg_100 );

    SC_METHOD(thread_res_we0);
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_sext_ln13_fu_179_p1);
    sensitive << ( add_ln13_fu_174_p2 );

    SC_METHOD(thread_sext_ln15_2_fu_205_p1);
    sensitive << ( add_ln15_1_fu_200_p2 );

    SC_METHOD(thread_sext_ln15_3_fu_233_p1);
    sensitive << ( add_ln15_2_fu_228_p2 );

    SC_METHOD(thread_sub_ln15_1_fu_222_p2);
    sensitive << ( zext_ln15_2_fu_196_p1 );
    sensitive << ( zext_ln15_3_fu_218_p1 );

    SC_METHOD(thread_sub_ln15_fu_152_p2);
    sensitive << ( zext_ln15_1_fu_148_p1 );
    sensitive << ( zext_ln15_fu_136_p1 );

    SC_METHOD(thread_tmp_2_fu_140_p3);
    sensitive << ( i_0_reg_78 );

    SC_METHOD(thread_tmp_3_fu_210_p3);
    sensitive << ( k_0_reg_113 );

    SC_METHOD(thread_zext_ln13_fu_170_p1);
    sensitive << ( j_0_reg_89 );

    SC_METHOD(thread_zext_ln15_1_fu_148_p1);
    sensitive << ( tmp_2_fu_140_p3 );

    SC_METHOD(thread_zext_ln15_2_fu_196_p1);
    sensitive << ( k_0_reg_113 );

    SC_METHOD(thread_zext_ln15_3_fu_218_p1);
    sensitive << ( tmp_3_fu_210_p3 );

    SC_METHOD(thread_zext_ln15_fu_136_p1);
    sensitive << ( i_0_reg_78 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln9_fu_124_p2 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( icmp_ln11_fu_158_p2 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( icmp_ln14_fu_184_p2 );

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_clk.pos() );

    ap_CS_fsm = "000001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "matrixmul_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, a_address0, "(port)a_address0");
    sc_trace(mVcdFile, a_ce0, "(port)a_ce0");
    sc_trace(mVcdFile, a_q0, "(port)a_q0");
    sc_trace(mVcdFile, b_address0, "(port)b_address0");
    sc_trace(mVcdFile, b_ce0, "(port)b_ce0");
    sc_trace(mVcdFile, b_q0, "(port)b_q0");
    sc_trace(mVcdFile, res_address0, "(port)res_address0");
    sc_trace(mVcdFile, res_ce0, "(port)res_ce0");
    sc_trace(mVcdFile, res_we0, "(port)res_we0");
    sc_trace(mVcdFile, res_d0, "(port)res_d0");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, i_fu_130_p2, "i_fu_130_p2");
    sc_trace(mVcdFile, i_reg_255, "i_reg_255");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, sub_ln15_fu_152_p2, "sub_ln15_fu_152_p2");
    sc_trace(mVcdFile, sub_ln15_reg_260, "sub_ln15_reg_260");
    sc_trace(mVcdFile, icmp_ln9_fu_124_p2, "icmp_ln9_fu_124_p2");
    sc_trace(mVcdFile, j_fu_164_p2, "j_fu_164_p2");
    sc_trace(mVcdFile, j_reg_269, "j_reg_269");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, zext_ln13_fu_170_p1, "zext_ln13_fu_170_p1");
    sc_trace(mVcdFile, zext_ln13_reg_274, "zext_ln13_reg_274");
    sc_trace(mVcdFile, icmp_ln11_fu_158_p2, "icmp_ln11_fu_158_p2");
    sc_trace(mVcdFile, res_addr_reg_279, "res_addr_reg_279");
    sc_trace(mVcdFile, k_fu_190_p2, "k_fu_190_p2");
    sc_trace(mVcdFile, k_reg_287, "k_reg_287");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, icmp_ln14_fu_184_p2, "icmp_ln14_fu_184_p2");
    sc_trace(mVcdFile, a_load_reg_302, "a_load_reg_302");
    sc_trace(mVcdFile, ap_CS_fsm_state5, "ap_CS_fsm_state5");
    sc_trace(mVcdFile, b_load_reg_307, "b_load_reg_307");
    sc_trace(mVcdFile, grp_fu_244_p3, "grp_fu_244_p3");
    sc_trace(mVcdFile, ap_CS_fsm_state6, "ap_CS_fsm_state6");
    sc_trace(mVcdFile, i_0_reg_78, "i_0_reg_78");
    sc_trace(mVcdFile, j_0_reg_89, "j_0_reg_89");
    sc_trace(mVcdFile, res_load_reg_100, "res_load_reg_100");
    sc_trace(mVcdFile, k_0_reg_113, "k_0_reg_113");
    sc_trace(mVcdFile, sext_ln13_fu_179_p1, "sext_ln13_fu_179_p1");
    sc_trace(mVcdFile, sext_ln15_2_fu_205_p1, "sext_ln15_2_fu_205_p1");
    sc_trace(mVcdFile, sext_ln15_3_fu_233_p1, "sext_ln15_3_fu_233_p1");
    sc_trace(mVcdFile, tmp_2_fu_140_p3, "tmp_2_fu_140_p3");
    sc_trace(mVcdFile, zext_ln15_1_fu_148_p1, "zext_ln15_1_fu_148_p1");
    sc_trace(mVcdFile, zext_ln15_fu_136_p1, "zext_ln15_fu_136_p1");
    sc_trace(mVcdFile, add_ln13_fu_174_p2, "add_ln13_fu_174_p2");
    sc_trace(mVcdFile, zext_ln15_2_fu_196_p1, "zext_ln15_2_fu_196_p1");
    sc_trace(mVcdFile, add_ln15_1_fu_200_p2, "add_ln15_1_fu_200_p2");
    sc_trace(mVcdFile, tmp_3_fu_210_p3, "tmp_3_fu_210_p3");
    sc_trace(mVcdFile, zext_ln15_3_fu_218_p1, "zext_ln15_3_fu_218_p1");
    sc_trace(mVcdFile, sub_ln15_1_fu_222_p2, "sub_ln15_1_fu_222_p2");
    sc_trace(mVcdFile, add_ln15_2_fu_228_p2, "add_ln15_2_fu_228_p2");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
    mHdltvinHandle.open("matrixmul.hdltvin.dat");
    mHdltvoutHandle.open("matrixmul.hdltvout.dat");
}

matrixmul::~matrixmul() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
    delete matrixmul_mac_mulbkb_U1;
}

void matrixmul::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(icmp_ln11_fu_158_p2.read(), ap_const_lv1_1))) {
        i_0_reg_78 = i_reg_255.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        i_0_reg_78 = ap_const_lv2_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(icmp_ln14_fu_184_p2.read(), ap_const_lv1_1))) {
        j_0_reg_89 = j_reg_269.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(icmp_ln9_fu_124_p2.read(), ap_const_lv1_0))) {
        j_0_reg_89 = ap_const_lv2_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        k_0_reg_113 = k_reg_287.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln11_fu_158_p2.read()))) {
        k_0_reg_113 = ap_const_lv2_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        res_load_reg_100 = grp_fu_244_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln11_fu_158_p2.read()))) {
        res_load_reg_100 = ap_const_lv16_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        a_load_reg_302 = a_q0.read();
        b_load_reg_307 = b_q0.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        i_reg_255 = i_fu_130_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        j_reg_269 = j_fu_164_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        k_reg_287 = k_fu_190_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln11_fu_158_p2.read()))) {
        res_addr_reg_279 =  (sc_lv<4>) (sext_ln13_fu_179_p1.read());
        zext_ln13_reg_274 = zext_ln13_fu_170_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(icmp_ln9_fu_124_p2.read(), ap_const_lv1_0))) {
        sub_ln15_reg_260 = sub_ln15_fu_152_p2.read();
    }
}

void matrixmul::thread_a_address0() {
    a_address0 =  (sc_lv<4>) (sext_ln15_2_fu_205_p1.read());
}

void matrixmul::thread_a_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        a_ce0 = ap_const_logic_1;
    } else {
        a_ce0 = ap_const_logic_0;
    }
}

void matrixmul::thread_add_ln13_fu_174_p2() {
    add_ln13_fu_174_p2 = (!sub_ln15_reg_260.read().is_01() || !zext_ln13_fu_170_p1.read().is_01())? sc_lv<5>(): (sc_biguint<5>(sub_ln15_reg_260.read()) + sc_biguint<5>(zext_ln13_fu_170_p1.read()));
}

void matrixmul::thread_add_ln15_1_fu_200_p2() {
    add_ln15_1_fu_200_p2 = (!sub_ln15_reg_260.read().is_01() || !zext_ln15_2_fu_196_p1.read().is_01())? sc_lv<5>(): (sc_biguint<5>(sub_ln15_reg_260.read()) + sc_biguint<5>(zext_ln15_2_fu_196_p1.read()));
}

void matrixmul::thread_add_ln15_2_fu_228_p2() {
    add_ln15_2_fu_228_p2 = (!sub_ln15_1_fu_222_p2.read().is_01() || !zext_ln13_reg_274.read().is_01())? sc_lv<5>(): (sc_biguint<5>(sub_ln15_1_fu_222_p2.read()) + sc_biguint<5>(zext_ln13_reg_274.read()));
}

void matrixmul::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void matrixmul::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void matrixmul::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void matrixmul::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void matrixmul::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void matrixmul::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void matrixmul::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(icmp_ln9_fu_124_p2.read(), ap_const_lv1_1))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void matrixmul::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void matrixmul::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(icmp_ln9_fu_124_p2.read(), ap_const_lv1_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void matrixmul::thread_b_address0() {
    b_address0 =  (sc_lv<4>) (sext_ln15_3_fu_233_p1.read());
}

void matrixmul::thread_b_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_ce0 = ap_const_logic_1;
    } else {
        b_ce0 = ap_const_logic_0;
    }
}

void matrixmul::thread_i_fu_130_p2() {
    i_fu_130_p2 = (!i_0_reg_78.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(i_0_reg_78.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void matrixmul::thread_icmp_ln11_fu_158_p2() {
    icmp_ln11_fu_158_p2 = (!j_0_reg_89.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(j_0_reg_89.read() == ap_const_lv2_3);
}

void matrixmul::thread_icmp_ln14_fu_184_p2() {
    icmp_ln14_fu_184_p2 = (!k_0_reg_113.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(k_0_reg_113.read() == ap_const_lv2_3);
}

void matrixmul::thread_icmp_ln9_fu_124_p2() {
    icmp_ln9_fu_124_p2 = (!i_0_reg_78.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(i_0_reg_78.read() == ap_const_lv2_3);
}

void matrixmul::thread_j_fu_164_p2() {
    j_fu_164_p2 = (!j_0_reg_89.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(j_0_reg_89.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void matrixmul::thread_k_fu_190_p2() {
    k_fu_190_p2 = (!k_0_reg_113.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(k_0_reg_113.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void matrixmul::thread_res_address0() {
    res_address0 = res_addr_reg_279.read();
}

void matrixmul::thread_res_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        res_ce0 = ap_const_logic_1;
    } else {
        res_ce0 = ap_const_logic_0;
    }
}

void matrixmul::thread_res_d0() {
    res_d0 = res_load_reg_100.read();
}

void matrixmul::thread_res_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        res_we0 = ap_const_logic_1;
    } else {
        res_we0 = ap_const_logic_0;
    }
}

void matrixmul::thread_sext_ln13_fu_179_p1() {
    sext_ln13_fu_179_p1 = esl_sext<64,5>(add_ln13_fu_174_p2.read());
}

void matrixmul::thread_sext_ln15_2_fu_205_p1() {
    sext_ln15_2_fu_205_p1 = esl_sext<64,5>(add_ln15_1_fu_200_p2.read());
}

void matrixmul::thread_sext_ln15_3_fu_233_p1() {
    sext_ln15_3_fu_233_p1 = esl_sext<64,5>(add_ln15_2_fu_228_p2.read());
}

void matrixmul::thread_sub_ln15_1_fu_222_p2() {
    sub_ln15_1_fu_222_p2 = (!zext_ln15_3_fu_218_p1.read().is_01() || !zext_ln15_2_fu_196_p1.read().is_01())? sc_lv<5>(): (sc_biguint<5>(zext_ln15_3_fu_218_p1.read()) - sc_biguint<5>(zext_ln15_2_fu_196_p1.read()));
}

void matrixmul::thread_sub_ln15_fu_152_p2() {
    sub_ln15_fu_152_p2 = (!zext_ln15_1_fu_148_p1.read().is_01() || !zext_ln15_fu_136_p1.read().is_01())? sc_lv<5>(): (sc_biguint<5>(zext_ln15_1_fu_148_p1.read()) - sc_biguint<5>(zext_ln15_fu_136_p1.read()));
}

void matrixmul::thread_tmp_2_fu_140_p3() {
    tmp_2_fu_140_p3 = esl_concat<2,2>(i_0_reg_78.read(), ap_const_lv2_0);
}

void matrixmul::thread_tmp_3_fu_210_p3() {
    tmp_3_fu_210_p3 = esl_concat<2,2>(k_0_reg_113.read(), ap_const_lv2_0);
}

void matrixmul::thread_zext_ln13_fu_170_p1() {
    zext_ln13_fu_170_p1 = esl_zext<5,2>(j_0_reg_89.read());
}

void matrixmul::thread_zext_ln15_1_fu_148_p1() {
    zext_ln15_1_fu_148_p1 = esl_zext<5,4>(tmp_2_fu_140_p3.read());
}

void matrixmul::thread_zext_ln15_2_fu_196_p1() {
    zext_ln15_2_fu_196_p1 = esl_zext<5,2>(k_0_reg_113.read());
}

void matrixmul::thread_zext_ln15_3_fu_218_p1() {
    zext_ln15_3_fu_218_p1 = esl_zext<5,4>(tmp_3_fu_210_p3.read());
}

void matrixmul::thread_zext_ln15_fu_136_p1() {
    zext_ln15_fu_136_p1 = esl_zext<5,2>(i_0_reg_78.read());
}

void matrixmul::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(icmp_ln9_fu_124_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 4 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(icmp_ln11_fu_158_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state4;
            }
            break;
        case 8 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && esl_seteq<1,1,1>(icmp_ln14_fu_184_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state3;
            } else {
                ap_NS_fsm = ap_ST_fsm_state5;
            }
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state6;
            break;
        case 32 : 
            ap_NS_fsm = ap_ST_fsm_state4;
            break;
        default : 
            ap_NS_fsm = "XXXXXX";
            break;
    }
}

void matrixmul::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst\" :  \"" << ap_rst.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_address0\" :  \"" << a_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_ce0\" :  \"" << a_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"a_q0\" :  \"" << a_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"b_address0\" :  \"" << b_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"b_ce0\" :  \"" << b_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"b_q0\" :  \"" << b_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_address0\" :  \"" << res_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_ce0\" :  \"" << res_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_we0\" :  \"" << res_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_d0\" :  \"" << res_d0.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

