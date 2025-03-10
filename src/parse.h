typedef union {
	tree	ttype;	/* pointer to a tree node */
	int	integer;	/* used for integers */
//	inst	ctype;	/* pointer to an instruction node (code) */
//	Datum	*dtype; /* pointer to a bit string for returning NUMBERs */
	lineno_t ltype;	/* for passing line numbers */
	enum tree_code	code;	/* for operators */
	enum tree_type	gtype;	/* for gates */
	enum tree_type	ntype;	/* for nets (same as gtype, buy more readable) */
	char	double_digit[2]; /* structure for parsing edges */
	char	c;		/* char used in udp parsing */
} YYSTYPE;

#define	LOWEST	258
#define	IF	259
#define	ELSE	260
#define	OROR	261
#define	ANDAND	262
#define	ANDANDAND	263
#define	XNOR	264
#define	LOGICAL_EQUALITY	265
#define	LOGICAL_INEQUALITY	266
#define	CASE_EQUALITY	267
#define	CASE_INEQUALITY	268
#define	LT	269
#define	LE	270
#define	GT	271
#define	GE	272
#define	LEFT_SHIFT	273
#define	RIGHT_SHIFT	274
#define	REDUCTION_NOR	275
#define	REDUCTION_NAND	276
#define	UNARY	277
#define	IDENTIFIER	278
#define	HIERARCHY_IDENTIFIER	279
#define	STARARROW	280
#define	EQUALARROW	281
#define	SPECPARAM	282
#define	SETUP	283
#define	HOLD	284
#define	PERIOD	285
#define	WIDTH	286
#define	SKEW	287
#define	RECOVERY	288
#define	SETUPHOLD	289
#define	NOCHANGE	290
#define	MODULE	291
#define	MACROMODULE	292
#define	ENDMODULE	293
#define	SPECIFY	294
#define	ENDSPECIFY	295
#define	PRIMITIVE	296
#define	ENDPRIMITIVE	297
#define	TABLE	298
#define	ENDTABLE	299
#define	TASK	300
#define	ENDTASK	301
#define	FUNCTION	302
#define	ENDFUNCTION	303
#define	PARAMETER	304
#define	INPUT	305
#define	OUTPUT	306
#define	INOUT	307
#define	NETTYPE	308
#define	TRIREG	309
#define	SCALARED	310
#define	VECTORED	311
#define	REG	312
#define	TIME	313
#define	INTEGER	314
#define	REAL	315
#define	EVENT	316
#define	ASSIGN	317
#define	DEFPARAM	318
#define	STRENGTH0	319
#define	STRENGTH1	320
#define	SUPPLY0	321
#define	SUPPLY1	322
#define	LOGIC	323
#define	BUFFER	324
#define	BUFIF	325
#define	CMOS	326
#define	PULL	327
#define	TRAN	328
#define	INITIAL	329
#define	ALWAYS	330
#define	CASE	331
#define	CASEZ	332
#define	CASEX	333
#define	ENDCASE	334
#define	FOREVER	335
#define	REPEAT	336
#define	WHILE	337
#define	FOR	338
#define	WAIT_	339
#define	ARROW_	340
#define	DISABLE	341
#define	DEASSIGN	342
#define	FORCE	343
#define	RELEASE	344
#define	DEFAULT	345
#define	BEGIN	346
#define	END	347
#define	FORK	348
#define	JOIN	349
#define	SYSTEM_IDENTIFIER	350
#define	STRING	351
#define	NUMBER	352
#define	BASE_NUMBER	353
#define	POSEDGE	354
#define	NEGEDGE	355
#define	OR	356
#define	SMALL	357
#define	MEDIUM	358
#define	LARGE	359
#define	EDGE	360
#define	DOUBLE_DIGIT	361
#define	UDP_CHAR	362
#define	UDP_ONE	363
#define	UDP_ZERO	364
#define	UDP_X	365
#define	UDP_B	366
#define	UDP_HOOK	367
#define	EOF_	368

