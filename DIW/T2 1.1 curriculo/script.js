const prefersReduced = window.matchMedia('(prefers-reduced-motion: reduce)').matches;

/* ---------------------------------------------
   Rolagem suave ao clicar no menu
--------------------------------------------- */

const header = document.querySelector('.topbar');
const nav = document.getElementById('siteNav');
const navToggle = document.getElementById('navToggle');

function headerOffset() {
    return (header ? header.offsetHeight : 0) + 12;
}

document.querySelectorAll('nav a[href^="#"]').forEach(link => {
    link.addEventListener('click', function (e) {
        e.preventDefault();

        const destino = document.querySelector(this.getAttribute('href'));
        if (!destino) return;

        const maxScroll = document.documentElement.scrollHeight - window.innerHeight;
        const posicao = Math.min(
            destino.getBoundingClientRect().top + window.scrollY - headerOffset(),
            maxScroll
        );

        if (prefersReduced) {
            window.scrollTo({ top: posicao });
        } else {
            window.scrollTo({ top: posicao, behavior: 'smooth' });
        }

        closeMobileNav();
    });
});

window.addEventListener('scroll', () => {
    const maxScroll = document.documentElement.scrollHeight - window.innerHeight;
    if (window.scrollY > maxScroll) {
        window.scrollTo({ top: maxScroll });
    }
});


/* ---------------------------------------------
   Menu mobile
--------------------------------------------- */

function closeMobileNav() {
    nav?.classList.remove('open');
    navToggle?.setAttribute('aria-expanded', 'false');
}

navToggle?.addEventListener('click', () => {
    const isOpen = nav.classList.toggle('open');
    navToggle.setAttribute('aria-expanded', String(isOpen));
});


/* ---------------------------------------------
   Scroll-spy: destaca o link da seção visível
--------------------------------------------- */

const sections = Array.from(document.querySelectorAll('main section[id]'));
const navLinks = Array.from(document.querySelectorAll('.site-nav a'));

function setActiveLink(id) {
    navLinks.forEach(link => {
        link.classList.toggle('active', link.getAttribute('href') === `#${id}`);
    });
}

if ('IntersectionObserver' in window && sections.length) {
    const observer = new IntersectionObserver((entries) => {
        const visible = entries
            .filter(entry => entry.isIntersecting)
            .sort((a, b) => b.intersectionRatio - a.intersectionRatio)[0];

        if (visible) setActiveLink(visible.target.id);
    }, {
        rootMargin: `-${headerOffset() + 20}px 0px -55% 0px`,
        threshold: [0.1, 0.25, 0.5, 0.75]
    });

    sections.forEach(section => observer.observe(section));
}


/* ---------------------------------------------
   Efeito de "digitação" no título de abertura
--------------------------------------------- */

const typedEl = document.getElementById('typedText');
const fullText = 'quem sou eu';

if (typedEl) {
    if (prefersReduced) {
        typedEl.textContent = fullText;
    } else {
        let i = 0;
        const type = () => {
            typedEl.textContent = fullText.slice(0, i);
            i++;
            if (i <= fullText.length) {
                setTimeout(type, 130);
            }
        };
        type();
    }
}


/* ---------------------------------------------
   Alternância de tema claro/escuro
--------------------------------------------- */

const themeToggle = document.getElementById('themeToggle');
const root = document.documentElement;
const THEME_KEY = 'miguel-cv-theme';

function applyTheme(theme) {
    root.setAttribute('data-theme', theme);
    themeToggle?.setAttribute('aria-pressed', String(theme === 'dark'));
}

function getPreferredTheme() {
    const saved = localStorage.getItem(THEME_KEY);
    if (saved) return saved;
    return window.matchMedia('(prefers-color-scheme: dark)').matches ? 'dark' : 'light';
}

applyTheme(getPreferredTheme());

themeToggle?.addEventListener('click', () => {
    const next = root.getAttribute('data-theme') === 'dark' ? 'light' : 'dark';
    applyTheme(next);
    localStorage.setItem(THEME_KEY, next);
});


/* ---------------------------------------------
   Botão "voltar ao topo"
--------------------------------------------- */

const backToTop = document.getElementById('backToTop');

backToTop?.addEventListener('click', () => {
    window.scrollTo({ top: 0, behavior: prefersReduced ? 'auto' : 'smooth' });
});
