PORTNAME=	fenics-ufl
DISTVERSION=	2022.2.0
PORTREVISION=	1
CATEGORIES=	math
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	FEniCS Unified Form Language
WWW=		https://github.com/FEniCS/ufl

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pip>0:devel/py-pip@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}wheel>0:devel/py-wheel@${PY_FLAVOR}

USES=		localbase python
USE_PYTHON=	distutils autoplist

USE_GITHUB=	yes
GH_ACCOUNT=	FEniCS
GH_PROJECT=	ufl

NO_ARCH=	yes

.include <bsd.port.mk>
