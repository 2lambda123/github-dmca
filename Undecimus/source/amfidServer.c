/*
 * IDENTIFICATION:
 * stub generated Wed Feb  6 14:18:21 2019
 * with a MiG generated by bootstrap_cmds-96.20.2
 * OPTIONS: 
 */

/* Module amfid */

#define	__MIG_check__Request__amfid_subsystem__ 1

#include "amfidServer.h"

#ifndef	mig_internal
#define	mig_internal	static __inline__
#endif	/* mig_internal */

#ifndef	mig_external
#define mig_external
#endif	/* mig_external */

#if	!defined(__MigTypeCheck) && defined(TypeCheck)
#define	__MigTypeCheck		TypeCheck	/* Legacy setting */
#endif	/* !defined(__MigTypeCheck) */

#if	!defined(__MigKernelSpecificCode) && defined(_MIG_KERNEL_SPECIFIC_CODE_)
#define	__MigKernelSpecificCode	_MIG_KERNEL_SPECIFIC_CODE_	/* Legacy setting */
#endif	/* !defined(__MigKernelSpecificCode) */

#ifndef	LimitCheck
#define	LimitCheck 0
#endif	/* LimitCheck */

#ifndef	min
#define	min(a,b)  ( ((a) < (b))? (a): (b) )
#endif	/* min */

#if !defined(_WALIGN_)
#define _WALIGN_(x) (((x) + 3) & ~3)
#endif /* !defined(_WALIGN_) */

#if !defined(_WALIGNSZ_)
#define _WALIGNSZ_(x) _WALIGN_(sizeof(x))
#endif /* !defined(_WALIGNSZ_) */

#ifndef	UseStaticTemplates
#define	UseStaticTemplates	0
#endif	/* UseStaticTemplates */

#ifndef	__DeclareRcvRpc
#define	__DeclareRcvRpc(_NUM_, _NAME_)
#endif	/* __DeclareRcvRpc */

#ifndef	__BeforeRcvRpc
#define	__BeforeRcvRpc(_NUM_, _NAME_)
#endif	/* __BeforeRcvRpc */

#ifndef	__AfterRcvRpc
#define	__AfterRcvRpc(_NUM_, _NAME_)
#endif	/* __AfterRcvRpc */

#ifndef	__DeclareRcvSimple
#define	__DeclareRcvSimple(_NUM_, _NAME_)
#endif	/* __DeclareRcvSimple */

#ifndef	__BeforeRcvSimple
#define	__BeforeRcvSimple(_NUM_, _NAME_)
#endif	/* __BeforeRcvSimple */

#ifndef	__AfterRcvSimple
#define	__AfterRcvSimple(_NUM_, _NAME_)
#endif	/* __AfterRcvSimple */

#define novalue void

#define msgh_request_port	msgh_local_port
#define MACH_MSGH_BITS_REQUEST(bits)	MACH_MSGH_BITS_LOCAL(bits)
#define msgh_reply_port		msgh_remote_port
#define MACH_MSGH_BITS_REPLY(bits)	MACH_MSGH_BITS_REMOTE(bits)

#define MIG_RETURN_ERROR(X, code)	{\
				((mig_reply_error_t *)X)->RetCode = code;\
				((mig_reply_error_t *)X)->NDR = NDR_record;\
				return;\
				}

/* Forward Declarations */


mig_internal novalue _Xverify_code_directory
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xpermit_unrestricted_debugging
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);


#if ( __MigTypeCheck )
#if __MIG_check__Request__amfid_subsystem__
#if !defined(__MIG_check__Request__verify_code_directory_t__defined)
#define __MIG_check__Request__verify_code_directory_t__defined

mig_internal kern_return_t __MIG_check__Request__verify_code_directory_t(__attribute__((__unused__)) __Request__verify_code_directory_t *In0P, __attribute__((__unused__)) __Request__verify_code_directory_t **In1PP)
{

	typedef __Request__verify_code_directory_t __Request;
	__Request *In1P;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	unsigned int msgh_size_delta;

#if	__MigTypeCheck
	msgh_size = In0P->Head.msgh_size;
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (msgh_size < (mach_msg_size_t)(sizeof(__Request) - 1024)) ||  (msgh_size > (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Request__verify_code_directory_t__pathCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Request__verify_code_directory_t__pathCnt(&In0P->pathCnt, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__verify_code_directory_t__pathCnt__defined */
	msgh_size_delta = _WALIGN_(In0P->pathCnt);
#if	__MigTypeCheck
	if ( In0P->pathCnt > 1024 )
		return MIG_BAD_ARGUMENTS;
	if (((msgh_size - (mach_msg_size_t)(sizeof(__Request) - 1024)) < In0P->pathCnt) ||
	    (msgh_size != (mach_msg_size_t)(sizeof(__Request) - 1024) + _WALIGN_(In0P->pathCnt)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

	*In1PP = In1P = (__Request *) ((pointer_t) In0P + msgh_size_delta - 1024);

#if __MigTypeCheck
	{
		char * msg_limit = ((char *) In0P) + In0P->Head.msgh_size;
		size_t memchr_limit;

		memchr_limit = min((msg_limit - In0P->path),  1024);
		if (( memchr(In0P->path, '\0', memchr_limit) == NULL ))
			return MIG_BAD_ARGUMENTS; // string length exceeds buffer length!
	}
#endif	/* __MigTypeCheck */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__verify_code_directory_t__defined) */
#endif /* __MIG_check__Request__amfid_subsystem__ */
#endif /* ( __MigTypeCheck ) */


/* Routine verify_code_directory */
mig_internal novalue _Xverify_code_directory
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t pathOffset; /* MiG doesn't use it */
		mach_msg_type_number_t pathCnt;
		char path[1024];
		uint64_t file_offset;
		int32_t a4;
		int32_t a5;
		int32_t a6;
		mach_msg_max_trailer_t trailer;
	} Request __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__verify_code_directory_t __Request;
	typedef __Reply__verify_code_directory_t Reply __attribute__((unused));

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Request *In1P;
	Reply *OutP = (Reply *) OutHeadP;
	unsigned int msgh_size_delta;

	mach_msg_max_trailer_t *TrailerP;
#if	__MigTypeCheck
	unsigned int trailer_size;
#endif	/* __MigTypeCheck */
#ifdef	__MIG_check__Request__verify_code_directory_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__verify_code_directory_t__defined */

	amfid_cdhash_t cdhash;

	__DeclareRcvRpc(1000, "verify_code_directory")
	__BeforeRcvRpc(1000, "verify_code_directory")

#if	defined(__MIG_check__Request__verify_code_directory_t__defined)
	check_result = __MIG_check__Request__verify_code_directory_t((__Request *)In0P, (__Request **)&In1P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__verify_code_directory_t__defined) */

	TrailerP = (mach_msg_max_trailer_t *)((vm_offset_t)In0P +
		round_msg(In0P->Head.msgh_size));
	if (TrailerP->msgh_trailer_type != MACH_MSG_TRAILER_FORMAT_0)
		{ MIG_RETURN_ERROR(In0P, MIG_TRAILER_ERROR); }
#if	__MigTypeCheck
	trailer_size = TrailerP->msgh_trailer_size -
		(mach_msg_size_t)(sizeof(mach_msg_trailer_type_t) - sizeof(mach_msg_trailer_size_t));
#endif	/* __MigTypeCheck */
#if	__MigTypeCheck
	if (trailer_size < (mach_msg_size_t)sizeof(audit_token_t))
		{ MIG_RETURN_ERROR(OutP, MIG_TRAILER_ERROR); }
	trailer_size -= (mach_msg_size_t)sizeof(audit_token_t);
#endif	/* __MigTypeCheck */
	OutP->RetCode = verify_code_directory(In0P->Head.msgh_request_port, In0P->path, In1P->file_offset, In1P->a4, In1P->a5, In1P->a6, &OutP->entitlements_valid, &OutP->signature_valid, &OutP->unrestrict, &OutP->signer_type, &OutP->is_apple, &OutP->is_developer_code, OutP->a13, cdhash, TrailerP->msgh_audit);
	if (OutP->RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, OutP->RetCode);
	}

	OutP->NDR = NDR_record;

#ifdef __LP64__
	{
		size_t strLength = strlen(OutP->a13) + 1;
		if (strLength > 0xffffffff)
			MIG_RETURN_ERROR(OutP, MIG_BAD_ARGUMENTS);
		OutP->a13Cnt = (mach_msg_type_number_t) strLength;
	}
#else
	OutP->a13Cnt = (mach_msg_type_number_t) strlen(OutP->a13) + 1;
#endif /* __LP64__ */
	msgh_size_delta = _WALIGN_((OutP->a13Cnt + 3) & ~3);
	OutP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply) - 4096) + msgh_size_delta;
	OutP = (Reply *) ((pointer_t) OutP + msgh_size_delta - 4096);
	{   typedef struct { char data[20]; } *sp;
	    * (sp) OutP->cdhash = * (sp) cdhash;
	}

	OutP = (Reply *) OutHeadP;
	__AfterRcvRpc(1000, "verify_code_directory")
}

#if ( __MigTypeCheck )
#if __MIG_check__Request__amfid_subsystem__
#if !defined(__MIG_check__Request__permit_unrestricted_debugging_t__defined)
#define __MIG_check__Request__permit_unrestricted_debugging_t__defined

mig_internal kern_return_t __MIG_check__Request__permit_unrestricted_debugging_t(__attribute__((__unused__)) __Request__permit_unrestricted_debugging_t *In0P)
{

	typedef __Request__permit_unrestricted_debugging_t __Request;
#if	__MigTypeCheck
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__permit_unrestricted_debugging_t__defined) */
#endif /* __MIG_check__Request__amfid_subsystem__ */
#endif /* ( __MigTypeCheck ) */


/* Routine permit_unrestricted_debugging */
mig_internal novalue _Xpermit_unrestricted_debugging
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		mach_msg_max_trailer_t trailer;
	} Request __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__permit_unrestricted_debugging_t __Request;
	typedef __Reply__permit_unrestricted_debugging_t Reply __attribute__((unused));

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
	mach_msg_max_trailer_t *TrailerP;
#if	__MigTypeCheck
	unsigned int trailer_size;
#endif	/* __MigTypeCheck */
#ifdef	__MIG_check__Request__permit_unrestricted_debugging_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__permit_unrestricted_debugging_t__defined */

	__DeclareRcvRpc(1001, "permit_unrestricted_debugging")
	__BeforeRcvRpc(1001, "permit_unrestricted_debugging")

#if	defined(__MIG_check__Request__permit_unrestricted_debugging_t__defined)
	check_result = __MIG_check__Request__permit_unrestricted_debugging_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__permit_unrestricted_debugging_t__defined) */

	TrailerP = (mach_msg_max_trailer_t *)((vm_offset_t)In0P +
		round_msg(In0P->Head.msgh_size));
	if (TrailerP->msgh_trailer_type != MACH_MSG_TRAILER_FORMAT_0)
		{ MIG_RETURN_ERROR(In0P, MIG_TRAILER_ERROR); }
#if	__MigTypeCheck
	trailer_size = TrailerP->msgh_trailer_size -
		(mach_msg_size_t)(sizeof(mach_msg_trailer_type_t) - sizeof(mach_msg_trailer_size_t));
#endif	/* __MigTypeCheck */
#if	__MigTypeCheck
	if (trailer_size < (mach_msg_size_t)sizeof(audit_token_t))
		{ MIG_RETURN_ERROR(OutP, MIG_TRAILER_ERROR); }
	trailer_size -= (mach_msg_size_t)sizeof(audit_token_t);
#endif	/* __MigTypeCheck */
	OutP->RetCode = permit_unrestricted_debugging(In0P->Head.msgh_request_port, &OutP->unrestricted_debugging, TrailerP->msgh_audit);
	if (OutP->RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, OutP->RetCode);
	}

	OutP->NDR = NDR_record;


	OutP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply));
	__AfterRcvRpc(1001, "permit_unrestricted_debugging")
}



/* Description of this subsystem, for use in direct RPC */
const struct amfid_subsystem amfid_subsystem = {
	amfid_server_routine,
	1000,
	1005,
	(mach_msg_size_t)sizeof(union __ReplyUnion__amfid_subsystem),
	(vm_address_t)0,
	{
          { (mig_impl_routine_t) 0,
          (mig_stub_routine_t) _Xverify_code_directory, 23, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__verify_code_directory_t)},
          { (mig_impl_routine_t) 0,
          (mig_stub_routine_t) _Xpermit_unrestricted_debugging, 10, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__permit_unrestricted_debugging_t)},
		{0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0},
	}
};

mig_external boolean_t amfid_server
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	register mig_routine_t routine;

	OutHeadP->msgh_bits = MACH_MSGH_BITS(MACH_MSGH_BITS_REPLY(InHeadP->msgh_bits), 0);
	OutHeadP->msgh_remote_port = InHeadP->msgh_reply_port;
	/* Minimal size: routine() will update it if different */
	OutHeadP->msgh_size = (mach_msg_size_t)sizeof(mig_reply_error_t);
	OutHeadP->msgh_local_port = MACH_PORT_NULL;
	OutHeadP->msgh_id = InHeadP->msgh_id + 100;
	OutHeadP->msgh_reserved = 0;

	if ((InHeadP->msgh_id > 1004) || (InHeadP->msgh_id < 1000) ||
	    ((routine = amfid_subsystem.routine[InHeadP->msgh_id - 1000].stub_routine) == 0)) {
		((mig_reply_error_t *)OutHeadP)->NDR = NDR_record;
		((mig_reply_error_t *)OutHeadP)->RetCode = MIG_BAD_ID;
		return FALSE;
	}
	(*routine) (InHeadP, OutHeadP);
	return TRUE;
}

mig_external mig_routine_t amfid_server_routine
	(mach_msg_header_t *InHeadP)
{
	register int msgh_id;

	msgh_id = InHeadP->msgh_id - 1000;

	if ((msgh_id > 4) || (msgh_id < 0))
		return 0;

	return amfid_subsystem.routine[msgh_id].stub_routine;
}
