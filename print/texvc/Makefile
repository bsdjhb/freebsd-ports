PORTNAME=	texvc
PORTVERSION=	20050202
PORTREVISION=	10
CATEGORIES=	print
MASTER_SITES=	SF/wikipedia/Support%20files/${PORTNAME}%20Linux-x86%20source%20%2B%20binary
DISTNAME=	${PORTNAME}-linux-x86-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Convert latex equations to HTML, MathML, PNG
WWW=		https://www.mediawiki.org/wiki/Texvc

USES=		gmake ocaml:build

BUILD_WRKSRC=	${WRKSRC}/src

PLIST_FILES=	bin/texvc

OPTIONS_DEFINE=	RASTER
OPTIONS_DEFAULT:=	${OPTIONS_DEFINE}

RASTER_DESC=	rasterization support
RASTER_USES=	ghostscript:run magick:6,run tex
RASTER_USE=	TEX=latex,dvipsk

MAKE_JOBS_UNSAFE=	yes

.include <bsd.port.options.mk>

.if ${ARCH} == powerpc
USE_BINUTILS=	yes
.endif

do-install:
	${INSTALL_PROGRAM} ${BUILD_WRKSRC}/texvc ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
