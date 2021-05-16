/*
 * Copyright (c) 2019, The Linux Foundation. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef _MACRX_ABORT_REQUEST_INFO_H_
#define _MACRX_ABORT_REQUEST_INFO_H_
#if !defined(__ASSEMBLER__)
#endif


// ################ START SUMMARY #################
//
//	Dword	Fields
//	0	macrx_abort_reason[7:0], reserved_0[15:8]
//
// ################ END SUMMARY #################

#define NUM_OF_WORDS_MACRX_ABORT_REQUEST_INFO 1

struct macrx_abort_request_info {
             uint16_t macrx_abort_reason              :  8, //[7:0]
                      reserved_0                      :  8; //[15:8]
};

/*

macrx_abort_reason
			
			<enum 0 macrx_abort_sw_initiated>
			
			<enum 1 macrx_abort_obss_reception> Upon receiving this
			abort reason, PHY should stop reception of the current frame
			and go back into a search mode
			
			<enum 2 macrx_abort_other>
			
			<enum 3 macrx_abort_sw_initiated_channel_switch > MAC FW
			issued an abort for channel switch reasons
			
			<enum 4 macrx_abort_sw_initiated_power_save > MAC FW
			issued an abort power save reasons
			
			<enum 5 macrx_abort_too_much_bad_data > RXPCU is
			terminating the current ongoing reception, as the data that
			MAC is receiving seems to be all garbage... The PER is too
			high, or in case of MU UL, Likely the trigger frame never
			got properly received by any of the targeted MU UL devices.
			After the abort, PHYRX can resume a normal search mode.
			
			
			
			<legal 0-5>

reserved_0
			
			<legal 0>
*/


/* Description		MACRX_ABORT_REQUEST_INFO_0_MACRX_ABORT_REASON
			
			<enum 0 macrx_abort_sw_initiated>
			
			<enum 1 macrx_abort_obss_reception> Upon receiving this
			abort reason, PHY should stop reception of the current frame
			and go back into a search mode
			
			<enum 2 macrx_abort_other>
			
			<enum 3 macrx_abort_sw_initiated_channel_switch > MAC FW
			issued an abort for channel switch reasons
			
			<enum 4 macrx_abort_sw_initiated_power_save > MAC FW
			issued an abort power save reasons
			
			<enum 5 macrx_abort_too_much_bad_data > RXPCU is
			terminating the current ongoing reception, as the data that
			MAC is receiving seems to be all garbage... The PER is too
			high, or in case of MU UL, Likely the trigger frame never
			got properly received by any of the targeted MU UL devices.
			After the abort, PHYRX can resume a normal search mode.
			
			
			
			<legal 0-5>
*/
#define MACRX_ABORT_REQUEST_INFO_0_MACRX_ABORT_REASON_OFFSET         0x00000000
#define MACRX_ABORT_REQUEST_INFO_0_MACRX_ABORT_REASON_LSB            0
#define MACRX_ABORT_REQUEST_INFO_0_MACRX_ABORT_REASON_MASK           0x000000ff

/* Description		MACRX_ABORT_REQUEST_INFO_0_RESERVED_0
			
			<legal 0>
*/
#define MACRX_ABORT_REQUEST_INFO_0_RESERVED_0_OFFSET                 0x00000000
#define MACRX_ABORT_REQUEST_INFO_0_RESERVED_0_LSB                    8
#define MACRX_ABORT_REQUEST_INFO_0_RESERVED_0_MASK                   0x0000ff00


#endif // _MACRX_ABORT_REQUEST_INFO_H_
