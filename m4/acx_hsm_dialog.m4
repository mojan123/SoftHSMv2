AC_DEFUN([ACX_HSM_DIALOG],[
	AC_ARG_ENABLE(
		[hsm_dialog],
		[AS_HELP_STRING([--disable-hsm_dialog],[disable hsm dialog link mode @<:@enabled@:>@])],
		[enable_hsm_dialog="${enableval}"],
		[enable_hsm_dialog="yes"]
	)
	if test "${enable_hsm_dialog}" = "yes"; then
      CFLAGS="${CFLAGS} $(pkg-config --cflags gtkmm-3.0)"
      CXXFLAGS="${CXXFLAGS} $(pkg-config --cflags gtkmm-3.0)"
      LIBS="${LIBS} $(pkg-config --libs gtkmm-3.0)"
		AC_DEFINE(CRYPTOKI_HSM_DIALOG, 1,
			  [Define to default hsm dialog of PKCS@%:@11 entry points])
	fi
])
