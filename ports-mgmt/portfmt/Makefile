PORTNAME=	portfmt
DISTVERSION=	1.1.6
CATEGORIES=	ports-mgmt
MASTER_SITES=	https://codeberg.org/tobik/portfmt/releases/download/v${DISTVERSION}/

MAINTAINER=	tobik@FreeBSD.org
COMMENT=	Format FreeBSD Ports Makefiles
WWW=		https://codeberg.org/tobik/portfmt

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		compiler:c11 ninja tar:lz
HAS_CONFIGURE=	yes
CONFIGURE_ARGS=	AR="${AR}" \
		CC="${CC}" \
		CFLAGS="${CFLAGS}" \
		CPPFLAGS="${CPPFLAGS}" \
		DESTDIR="${STAGEDIR}" \
		INSTALL_MAN="${INSTALL_MAN}" \
		INSTALL_PROGRAM="${INSTALL_PROGRAM}" \
		LDFLAGS="${LDFLAGS}" \
		PREFIX="${PREFIX}"

OPTIONS_DEFINE=	SUBPACKAGES

SUBPACKAGES_DESC=	Subpackages support (D16457)

SUBPACKAGES_CONFIGURE_OFF=	FEATURES="!subpackages"

.include <bsd.port.mk>
