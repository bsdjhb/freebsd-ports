PORTNAME=	ucommon
PORTVERSION=	7.0.0
PORTREVISION=	6
CATEGORIES=	devel
MASTER_SITES=	GNU/commoncpp

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Very lightweight C++ design pattern library
WWW=		https://www.gnu.org/software/commoncpp/

LICENSE=	LGPL3
LICENSE_FILE=	${WRKSRC}/COPYING.LESSER

USES=		compiler:c++11-lib cmake pathfix pkgconfig ssl
CMAKE_ARGS=	-DBUILD_TESTING:BOOL=ON \
		-DCMAKE_INSTALL_BINDIR:STRING=bin/${PORTNAME}
USE_LDCONFIG=	yes
TEST_TARGET=	test

.include <bsd.port.pre.mk>

.if ${COMPILER_TYPE} == clang
USE_CXXSTD=	c++11
.endif

post-install:
	${INSTALL_DATA} ${BUILD_WRKSRC}/ucommon-config.h ${STAGEDIR}${PREFIX}/include/ucommon

.include <bsd.port.post.mk>
